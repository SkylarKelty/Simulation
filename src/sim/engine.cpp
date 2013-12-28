/**
 * An efficient c++ simulation demo
 *
 * @author Skylar Kelty <skylarkelty@gmail.com>
 */

#include <signal.h>
#include <thread>
#include <chrono>
#include "engine.h"
#include "src/data/LLNode.h"

Engine::EngineStatus Engine::_status = Engine::EngineStatus::READY;

/**
 * Constructor for engine
 */
Engine::Engine() {
	assert(Engine::_status == Engine::EngineStatus::READY);

	this->actors = new LinkedList<Actor *>();
	this->fstore = new Store();
	this->setupSigintHandler();
}

/**
 * Destructor for engine
 */
Engine::~Engine() {
	delete this->actors;
	delete this->fstore;
}

/**
 * Tick the simulation once
 */
void Engine::tick() {
	// Tick all of the actors
	LLNode<Actor *> *cur = this->actors->first();
	while (cur) {
		if (cur->data) {
			cur->data->act();
		}
		cur = cur->getNext();
	}

	// Flush the logs
	this->fstore->flush();
}

/**
 * Run through this simulation
 */
void Engine::run() {
	Engine::_status = Engine::EngineStatus::RUNNING;
	while (Engine::_status == Engine::EngineStatus::RUNNING) {
		// Tick!
		this->tick();
		// Sleep :)
		std::this_thread::sleep_for(std::chrono::milliseconds(100));
	}

	// Close up the file store
	delete this->fstore;
	this->fstore = 0;
}

/**
 * Capture sigint events and handle appropriately
 */
void Engine::setupSigintHandler() {
	struct sigaction sigIntHandler;
	sigIntHandler.sa_handler = [](int) {
		// Handle sigint
		Engine::_status = Engine::EngineStatus::HALTING;
	};
	sigemptyset(&sigIntHandler.sa_mask);
	sigIntHandler.sa_flags = 0;

	sigaction(SIGINT, &sigIntHandler, 0);
}
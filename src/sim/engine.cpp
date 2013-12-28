/**
 * An example simulation to show how something
 * like this might work one day...
 *
 * @author Skylar Kelty <skylarkelty@gmail.com>
 */

#include <signal.h>
#include <thread>
#include <chrono>
#include "engine.h"

Engine::EngineStatus Engine::_status = Engine::EngineStatus::READY;

/**
 * Constructor for engine
 */
Engine::Engine() {
	this->actors = new IntLinkedList();
	this->setupSigintHandler();
}

/**
 * Destructor for engine
 */
Engine::~Engine() {
	delete this->actors;
}

/**
 * Run through this simulation
 */
void Engine::run() {
	Engine::_status = Engine::EngineStatus::RUNNING;
	while (Engine::_status == Engine::EngineStatus::RUNNING) {
		std::this_thread::sleep_for(std::chrono::milliseconds(100));
	}
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
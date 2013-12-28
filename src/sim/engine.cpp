/**
 * An example simulation to show how something
 * like this might work one day...
 *
 * @author Skylar Kelty <skylarkelty@gmail.com>
 */

#include "engine.h"
#include <signal.h>

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

}

/**
 * Capture sigint events and handle appropriately
 */
void Engine::setupSigintHandler() {
	struct sigaction sigIntHandler;
	sigIntHandler.sa_handler = [](int) {
		// Handle sigint
	};
	sigemptyset(&sigIntHandler.sa_mask);
	sigIntHandler.sa_flags = 0;

	sigaction(SIGINT, &sigIntHandler, 0);
}
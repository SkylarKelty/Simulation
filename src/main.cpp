/**
 * An efficient c++ simulation demo
 *
 * @author Skylar Kelty <skylarkelty@gmail.com>
 */

#include "sim/engine.h"

/**
 * The main function is used to initialize the engine
 */
int main( int argc, const char* argv[] ) {
	Engine *sim = new Engine();

	sim->run();

	delete sim;

	return 0;
}
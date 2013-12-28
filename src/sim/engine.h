/**
 * An efficient c++ simulation demo
 *
 * @author Skylar Kelty <skylarkelty@gmail.com>
 */

#include "src/common.h"
#include "src/data/linkedlist.h"
#include "src/sim/actor.h"

class Engine {
private:
	enum EngineStatus { READY, RUNNING, HALTING };
	static Engine::EngineStatus _status;

	void setupSigintHandler();

	void tick();

protected:
	LinkedList<Actor *> *actors;

public:
	Engine();
	~Engine();

	void run();
};
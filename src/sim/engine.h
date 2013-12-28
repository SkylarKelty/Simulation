/**
 * An efficient c++ simulation demo
 *
 * @author Skylar Kelty <skylarkelty@gmail.com>
 */

#include "src/common.h"
#include "src/data/LLNode.h"
#include "src/data/linkedlist.h"
#include "src/sim/actor.h"
#include "src/persistence/store.h"

class Engine {
private:
	enum EngineStatus { READY, RUNNING, HALTING };
	static Engine::EngineStatus _status;

	Store *fstore;
	LinkedList<Actor *> *actors;

	void setupSigintHandler();
	void tick();

public:
	Engine();
	~Engine();

	void run();

	/**
	 * Adds an actor to the engine
	 */
	inline void addActor(Actor *actor) {
		this->actors->append(new LLNode<Actor *>(actor));
	}
};
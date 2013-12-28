/**
 * An example simulation to show how something
 * like this might work one day...
 *
 * @author Skylar Kelty <skylarkelty@gmail.com>
 */

#pragma once

#include "src/data/LLNode_fwd.h"
#include "src/data/linkedlist_fwd.h"

class Engine {
protected:
	IntLinkedList *actors;

public:
	Engine();
	~Engine();

	void run();
};
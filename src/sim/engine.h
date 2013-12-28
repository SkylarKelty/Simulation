/**
 * An example simulation to show how something
 * like this might work one day...
 *
 * @author Skylar Kelty <skylarkelty@gmail.com>
 */

#include "src/common.h"
#include "src/data/linkedlist.h"

class Engine {
protected:
	IntLinkedList *actors;

public:
	Engine();
	~Engine();

	void run();
};
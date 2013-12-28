/**
 * An example simulation to show how something
 * like this might work one day...
 *
 * @author Skylar Kelty <skylarkelty@gmail.com>
 */

#include "src/common.h"

class Actor {
friend class Engine;

protected:
	void act();

public:
	Actor();
	~Actor();
};

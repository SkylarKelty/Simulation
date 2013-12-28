/**
 * An efficient c++ simulation demo
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

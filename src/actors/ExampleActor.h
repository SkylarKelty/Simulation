/**
 * An efficient c++ simulation demo
 *
 * @author Skylar Kelty <skylarkelty@gmail.com>
 */

#include "src/common.h"
#include "src/sim/actor.h"

class ExampleActor : public Actor {
private:
	unsigned int counter;

protected:
	void s_in(const char *data);
	const char *s_out();

public:
	ExampleActor();

	void act();

};
/**
 * An efficient c++ simulation demo
 *
 * @author Skylar Kelty <skylarkelty@gmail.com>
 */

#include "src/common.h"
#include "src/persistence/serializable.h"

class Actor : public Serializable {
friend class Engine;

protected:
	/**
	 * Causes the actor to "act" (Do something)
	 */
	virtual void act() { }

public:
	Actor();
	virtual ~Actor();
};

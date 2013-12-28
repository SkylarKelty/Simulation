/**
 * An efficient c++ simulation demo
 *
 * @author Skylar Kelty <skylarkelty@gmail.com>
 */

#include <iostream>
#include <fstream>
#include "src/common.h"
#include "src/persistence/serializable.h"

class Store {
friend class Engine;

private:
	std::ofstream _file;

protected:
	Store();
	~Store();

public:
	void start();
	void write(Serializable *data);
	void write(const char *data);
	void end();
};
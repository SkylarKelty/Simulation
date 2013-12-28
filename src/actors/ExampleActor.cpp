/**
 * An efficient c++ simulation demo
 *
 * @author Skylar Kelty <skylarkelty@gmail.com>
 */

#include <string>
#include <stdio.h>
#include "ExampleActor.h"

ExampleActor::ExampleActor() {
	this->counter = 0;
}

void ExampleActor::act() {
	this->counter++;
	printf("%d\n", this->counter);
}

void ExampleActor::s_in(const char *data) {
	this->counter = std::stoi(data);
}

const char *ExampleActor::s_out() {
	return std::to_string(this->counter).c_str();
}
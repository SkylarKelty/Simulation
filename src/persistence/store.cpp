/**
 * An efficient c++ simulation demo
 *
 * @author Skylar Kelty <skylarkelty@gmail.com>
 */

#include <sys/stat.h>
#include "store.h"

Store::Store() {
	// Check our log dir exists
	mkdir("logs", S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);

	// Open an fp
	this->_file.open("logs/core.log");
}

Store::~Store() {
	// Close the fp
	this->_file.close();
}

/**
 * Start a new transaction (Write a separator to the logs)
 */
void Store::start() {
	this->_file << "MARK \n";
}

/**
 * Write data to the persistence logs
 */
void Store::write(Serializable *data) {
	this->_file << data->getUID();
	this->_file << ": ";
	this->_file << data->s_out();
	this->_file << "\n";
}

/**
 * Write data to the persistence logs
 */
void Store::write(const char *data) {
	this->_file << data;
	this->_file << "\n";
}

/**
 * End the current transaction (Flush the log files)
 */
void Store::end() {
	this->_file.flush();
}
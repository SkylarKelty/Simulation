/**
 * An efficient c++ simulation demo
 *
 * @author Skylar Kelty <skylarkelty@gmail.com>
 */

#pragma once

class Serializable {
friend class Store;

private:
	unsigned int uid;
	
protected:
	inline int getUID() {
		static unsigned int counter = 1000;
		if (!this->uid) {
			this->uid = counter++;
		}
		return this->uid;
	}

	virtual void s_in(const char *data) { }
	virtual const char *s_out() { return ""; }

};
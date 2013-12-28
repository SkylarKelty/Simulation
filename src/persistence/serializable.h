/**
 * An efficient c++ simulation demo
 *
 * @author Skylar Kelty <skylarkelty@gmail.com>
 */

#pragma once

class Serializable {
friend class Store;
	
protected:
	virtual void s_in(const char *data) { }
	virtual const char *s_out() { return ""; }

};
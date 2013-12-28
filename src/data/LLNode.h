/**
 * An example simulation to show how something
 * like this might work one day...
 *
 * @author Skylar Kelty <skylarkelty@gmail.com>
 */

#pragma once

#include "src/common.h"

/**
 * A Linked List Node
 */
template <typename T>
class LLNode {
friend class LinkedList<T>;

private:
	inline int length(int curr) {
		if (this->next) {
			curr = curr + this->next->length();
		}
		return curr + 1;
	}

protected:
	LLNode<T> *next;
	LLNode<T> *prev;

public:
	T data;
	
	~LLNode();
	
	/**
	 * Get next element
	 */
	inline LLNode<T> *getNext() {
		return this->next;
	}

	/**
	 * Get previous element
	 */
	inline LLNode<T> *getPrev() {
		return this->prev;
	}

	/**
	 * Returns the length of this chain
	 */
	int length() {
		return this->length(0);
	}

};

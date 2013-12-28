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
struct LLNode {
friend class LinkedList<T>;

private:
	inline int length(int curr);

protected:
	LLNode<T> *next;
	LLNode<T> *prev;
	T data;

public:
	~LLNode();
	
	LLNode<T> *getNext();
	LLNode<T> *getPrev();

	/**
	 * Returns the length of this chain
	 */
	int length() {
		return this->length(0);
	}

};

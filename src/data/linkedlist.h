/**
 * An efficient c++ simulation demo
 *
 * @author Skylar Kelty <skylarkelty@gmail.com>
 */

#pragma once

#include "src/common.h"

/**
 * A linked list
 */
template <typename T>
class LinkedList {
friend class Engine;

private:
	LLNode<T> *head;
	LLNode<T> *tail;

protected:
	void append(LLNode<T> *node);

public:
	LinkedList();
	~LinkedList();

	/**
	 * Get the first element of the list
	 */
	inline LLNode<T> *first() {
		return this->head;
	}

	/**
	 * Get the last element of the list
	 */
	inline LLNode<T> *last() {
		return this->tail;
	}

	/**
	 * Get the length of the list
	 */
	inline int length() {
		return this->head->length();
	}
};

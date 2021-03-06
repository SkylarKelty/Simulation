/**
 * An efficient c++ simulation demo
 *
 * @author Skylar Kelty <skylarkelty@gmail.com>
 */

#include "linkedlist.h"
#include "LLNode.h"
#include "src/sim/actor.h"

/**
 * Constructor for Linked List
 */
template <typename T>
LinkedList<T>::LinkedList() {
}

/**
 * Destructor for Linked List
 */
template <typename T>
LinkedList<T>::~LinkedList() {
	delete this->head;
}

/**
 * Add a new item to the list
 */
template <typename T>
void LinkedList<T>::append(LLNode<T> *node) {
	// Is this the first item?
	if (!this->head) {
		this->head = node;
		this->tail = node;
		return;
	}

	this->tail->next = node;
	this->tail = node;
}

// Compiler magic
template class LinkedList<Actor *>;
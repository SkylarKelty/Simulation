/**
 * An example simulation to show how something
 * like this might work one day...
 *
 * @author Skylar Kelty <skylarkelty@gmail.com>
 */

#include "linkedlist.h"

/**
 * Constructor for Linked List
 */
template <typename T>
LinkedList<T>::LinkedList() {
	this->len = 0;
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

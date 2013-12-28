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
template <typename T, template <typename> class LLNode>
LinkedList<T, LLNode>::LinkedList() {
	this->len = 0;
}

/**
 * Destructor for Linked List
 */
template <typename T, template <typename> class LLNode>
LinkedList<T, LLNode>::~LinkedList() {
	delete this->head;
}

/**
 * Add a new item to the list
 */
template <typename T, template <typename> class LLNode>
void LinkedList<T, LLNode>::append(LLNode<T> *node) {
	this->len++;

	// Is this the first item?
	if (!this->head) {
		this->head = node;
		this->tail = node;
		return;
	}

	this->tail->next = node;
	this->tail = node;
}

/**
 * Get the first element of the list
 */
template <typename T, template <typename> class LLNode>
LLNode<T> *LinkedList<T, LLNode>::first() {
	return this->head;
}

/**
 * Get the last element of the list
 */
template <typename T, template <typename> class LLNode>
LLNode<T> *LinkedList<T, LLNode>::last() {
	return this->tail;
}
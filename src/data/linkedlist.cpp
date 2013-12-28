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
LinkedList::LinkedList() {

}

/**
 * Destructor for Linked List
 */
LinkedList::~LinkedList() {
	delete this->head;
}

/**
 * Add a new item to the list
 */
void LinkedList::append(LLNode *node) {
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
LLNode *LinkedList::first() {
	return this->head;
}

/**
 * Get the last element of the list
 */
LLNode *LinkedList::last() {
	return this->tail;
}
/**
 * An example simulation to show how something
 * like this might work one day...
 *
 * @author Skylar Kelty <skylarkelty@gmail.com>
 */

#pragma once

class LinkedList;

#include "linkedlist.h"

/**
 * A Linked List Node
 */
struct LLNode {
friend class LinkedList;

protected:
	LinkedList *parent;
	LLNode *next;
	LLNode *prev;

public:

	/**
	 * Dont leak!
	 */
	~LLNode() {
		// Delete this element, if there is no element before us this will
		// destroy the entire chain.
		if (!this->prev) {
			delete this->next;
			return;
		}

		// Do we have a next element?
		if (this->next) {
			// Tie it up to the prev
			this->prev->next = this->next;
			return;
		}

		// Remove old pointer
		this->prev->next = 0;
	}

	/**
	 * Get next element
	 */
	LLNode *getNext() {
		return this->next;
	}

	/**
	 * Get previous element
	 */
	LLNode *getPrev() {
		return this->prev;
	}
};

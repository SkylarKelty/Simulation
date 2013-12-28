/**
 * An example simulation to show how something
 * like this might work one day...
 *
 * @author Skylar Kelty <skylarkelty@gmail.com>
 */

#include "LLNode.h"

/**
 * Dont leak!
 */
template <class T>
LLNode<T>::~LLNode() {
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
template <class T>
LLNode<T> *LLNode<T>::getNext() {
	return this->next;
}

/**
 * Get previous element
 */
template <class T>
LLNode<T> *LLNode<T>::getPrev() {
	return this->prev;
}

/**
 * Get the length of this chain
 */
template <class T>
inline int LLNode<T>::length(int curr) {
	if (this->next) {
		curr = curr + this->next->length();
	}
	return curr + 1;
}

// Compiler magic
template class LLNode<int>;
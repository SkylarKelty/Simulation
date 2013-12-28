/**
 * An example simulation to show how something
 * like this might work one day...
 *
 * @author Skylar Kelty <skylarkelty@gmail.com>
 */

#include "LLNode.h"
#include "src/sim/actor.h"

/**
 * Dont leak!
 */
template <typename T>
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

// Compiler magic
template class LLNode<Actor *>;
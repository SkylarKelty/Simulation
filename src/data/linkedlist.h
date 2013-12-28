/**
 * An example simulation to show how something
 * like this might work one day...
 *
 * @author Skylar Kelty <skylarkelty@gmail.com>
 */

#pragma once

/**
 * A linked list
 */
template <typename T, template <typename> class LLNode>
class LinkedList {
private:
	LLNode<T> *head;
	LLNode<T> *tail;

public:
	LinkedList();
	~LinkedList();

	void append(LLNode<T> *node);

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

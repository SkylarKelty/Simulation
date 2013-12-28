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
	int len;

public:
	LinkedList();
	~LinkedList();

	void append(LLNode<T> *node);

	LLNode<T> *first();
	LLNode<T> *last();
};

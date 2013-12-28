/**
 * An example simulation to show how something
 * like this might work one day...
 *
 * @author Skylar Kelty <skylarkelty@gmail.com>
 */

#pragma once

/**
 * A Linked List Node
 */
template <class T>
struct LLNode {
friend class LinkedList;

protected:
	LLNode<T> *next;
	LLNode<T> *prev;
	T data;

public:
	~LLNode();
	LLNode<T> *getNext();
	LLNode<T> *getPrev();
};

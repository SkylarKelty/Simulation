/**
 * An example simulation to show how something
 * like this might work one day...
 *
 * @author Skylar Kelty <skylarkelty@gmail.com>
 */

#pragma once

class LLNode;

#include "LLNode.h"

/**
 * A linked list
 */
class LinkedList {
private:
	LLNode *head;
	LLNode *tail;
	int len;

public:
	LinkedList();
	~LinkedList();
	void append(LLNode *node);
	LLNode *first();
	LLNode *last();
};

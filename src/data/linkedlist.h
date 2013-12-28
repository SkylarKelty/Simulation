/**
 * An example simulation to show how something
 * like this might work one day...
 *
 * @author Skylar Kelty <skylarkelty@gmail.com>
 */

struct LLNode {
friend class LinkedList;

protected:
	LLNode *next;
	LLNode *prev;

public:

	~LLNode() {
		delete this->next;
	}

	LLNode *getNext() {
		return this->next;
	}

	LLNode *getPrev() {
		return this->prev;
	}
};

/**
 * A linked list
 */
class LinkedList {
private:
	LLNode *head;
	LLNode *tail;

public:
	LinkedList();
	~LinkedList();
	void append(LLNode *node);
	LLNode *first();
	LLNode *last();
};
/**
 * An example simulation to show how something
 * like this might work one day...
 *
 * @author Skylar Kelty <skylarkelty@gmail.com>
 */

#include "LLNode_fwd.h"

template <typename T, template <typename> class LLNode> class LinkedList;

// Our typdefs 
typedef LinkedList<int, IntLLNode> IntLinkedList;
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

class LinkedList {
public:
	Node *head;
	Node *tail;
	int size;

	LinkedList();
	void add(int value);
	int get(int index);
};
#endif
#ifndef NODE_H
#define NODE_H

class Node {
public:
	Node * next;
	Node *prev;
	int value;

	Node(int value);
};

#endif
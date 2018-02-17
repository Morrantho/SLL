#include "LinkedList.h"

LinkedList::LinkedList() {
	this->head = 0;
	this->tail = 0;
	this->size = 0;
}

void LinkedList::add(int value) {
	if (head == 0) {
		head = new Node(value);
		size++;
	}
	else {
		Node *ptr = head;
		Node *last = ptr;

		while (ptr->next != 0) {
			last = ptr;
			ptr = ptr->next;
		}

		ptr->next = new Node(value);
		last = last == head ? 0 : last;
		ptr->prev = last;
		ptr->next->prev = ptr;

		tail = ptr->next;
		size++;
	}
}

int LinkedList::get(int index) {
	if (index < 0 || index > size - 1) return 0;
	Node *ptr = index < size / 2 - 1 ? head : tail; // determine fastest approach

	if (ptr == head) {
		for (int i = 0; i<index; i++)
			ptr = ptr->next;
	}
	else {
		for (int i = 0; i<size - index - 1; i++)
			ptr = ptr->prev;
	}

	return ptr->value;
}
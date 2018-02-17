#include <iostream>
#include "LinkedList.h"

int main(){
	LinkedList sll;
	sll.add(10);
	sll.add(20);
	sll.add(30);
	sll.add(40);

	std::cout << sll.get(2) << std::endl;

	return 0;
}
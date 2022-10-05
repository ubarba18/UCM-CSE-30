#include "LinkedList_char.h"
#include <iostream>

class Queue_char: public LinkedList_char {
	public:
		Queue_char();
		~Queue_char();
		void enqueue(char val);
		char dequeue();
		char& front();
};
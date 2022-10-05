#include "Queue_char.h"
#include "LinkedList_char.h"

Queue_char::Queue_char(){

}
Queue_char::~Queue_char(){

}

void Queue_char::enqueue(char val){
	insertAtBack(val);
}

char Queue_char::dequeue(){
    if (isEmpty()){
    throw 0;
    }
    char temp = first->val;
	removeFromFront();
	return temp;
}

char& Queue_char::front(){
    if (isEmpty()) {
    throw 1;
    }
	return first->val;
}
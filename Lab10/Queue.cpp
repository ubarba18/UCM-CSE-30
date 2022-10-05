#include "Queue.h"
#include "LinkedList.h"

Queue::Queue(){

}
Queue::~Queue(){

}

void Queue::enqueue(int val){
	insertAtBack(val);
}

int Queue::dequeue(){
    if (isEmpty()){
    throw 0;
    }
    int temp = first->val;
	removeFromFront();
	return temp;
}

int& Queue::front(){
    if (isEmpty()) {
    throw 1;
    }
	return first->val;
}
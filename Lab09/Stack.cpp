#include <iostream>
#include "Stack.h"
#include "LinkedList.h"

using namespace std;

Stack::Stack() { //Constructor
}

Stack::~Stack() { //Destructor

}

void Stack::push(int pushVal) {
    insertAtFront(pushVal);
}

int Stack::pop(){
    int temp = first->val; //Save value
    removeFromFront(); //Delete front
    return temp; //Return value that has been popped
}

int& Stack::top(){
    return first->val; //Return top element of stack
}
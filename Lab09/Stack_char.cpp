#include <iostream>
#include "Stack_char.h"
#include "LinkedList_char.h"

using namespace std;

Stack_char::Stack_char() { //Constructor
}

Stack_char::~Stack_char() { //Destructor

}

void Stack_char::push(char pushVal) {
    insertAtBack(pushVal);
}

char Stack_char::pop(){
    char temp = first->val; //Save value
    removeFromBack(); //Delete back
    return temp; //Return value that has been popped
}

char& Stack_char::top(){
    return first->val; //Return top element of stack
}
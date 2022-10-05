#include "LinkedList_char.h"

class Stack_char: public LinkedList_char { //Inherit
    public:
    Stack_char(); //Constructor
    ~Stack_char(); //Destructor
    void push (char pushVal);
    char pop();
    char &top();
};
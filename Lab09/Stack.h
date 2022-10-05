#include "LinkedList.h"

class Stack: public LinkedList { //Inherit
    public:
    Stack(); //Constructor
    ~Stack(); //Destructor
    void push (int pushVal);
    int pop();
    int &top();
};
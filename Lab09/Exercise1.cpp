#include <iostream>
#include "Stack.h"

using namespace std;

int main(){
    Stack stack; 

    for (int i = 0; i < 10; i++) {
        stack.push(i+1);
        cout << "Item " << i+1 << " has been added to the stack." << endl;
    }

    cout << "The top of the stack is: " << stack.top() << endl;
    cout << "The size of the stack is: " << stack.size() << endl;

    if (stack.isEmpty()) {
        cout << "The stack is empty!" << endl;
    }

    else {
        cout << "The stack is not empty!" << endl;
    }

    cout << "The content of the stack is: [";
    stack.print();
    cout << "]" << endl;

    while (!stack.isEmpty()){
        cout << stack.pop() << " has been popped!" << endl;

        cout << "The content of the stack is now: [";
        stack.print();
        cout << "]" << endl;

        cout << "The top of the stack is now: " << stack.top() << endl;
    }
    
}
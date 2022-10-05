#include <iostream>
#include "Stack_char.h"

using namespace std;

int main(){
    Stack_char stack_char; 

    cout << "isEmpty()\t";
    if (stack_char.isEmpty()) {
        cout << "true\t";
    }  
    else {
        cout << "false\t";
    }
    stack_char.print();
    cout << endl;
    //
    cout << "push(A)\t\t\t";
    stack_char.push('A');
    stack_char.print();
    cout << endl;
    //
    cout << "push(Y)\t\t\t";
    stack_char.push('Y');
    stack_char.print();
    cout << endl;
    //
    cout << "size()\t\t";
    cout << stack_char.size() << "\t";
    stack_char.print();
    cout << endl;
    //
    cout << "pop()\t\t";
    cout << stack_char.pop();
    cout << "\t";
    stack_char.print();
    cout << endl;
    //
    cout << "isEmpty()\t";
    if (stack_char.isEmpty()) {
         cout << "true\t";
    }  
    else {
        cout << "false\t";
    }
    stack_char.print();
    cout << endl;
    //
    cout << "push(D)\t\t\t";
    stack_char.push('D');
    stack_char.print();
    cout << endl;
    //
    cout << "top()\t\t";
    cout << stack_char.top();
    cout << "\t";
    stack_char.print();
    cout << endl;
    //  
    cout << "push(T)\t\t\t";
    stack_char.push('T');
    stack_char.print();
    cout << endl;
    //
    cout << "pop()\t\t";
    cout << stack_char.pop();
    cout << "\t";
    stack_char.print();
    cout << endl;
}
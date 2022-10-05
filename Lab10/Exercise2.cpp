#include <iostream>
#include "Queue_char.h"

using namespace std;

int main(){
    Queue_char Queue_char; 

    cout << "dequeue()\t";
    try {
        cout << Queue_char.dequeue();
    }

    catch (int e) {
        if (e) {
            cout << "exception\t";
        }
        else {
            cout << "exception\t";
        }
    }
    Queue_char.print();
    cout << endl;

    cout << "enqueue(D)\t";
    Queue_char.enqueue('D');
    cout << "\t\t";
    Queue_char.print();
    cout << endl;

    cout << "enqueue(A)\t";
    Queue_char.enqueue('A');
    cout << "\t\t";
    Queue_char.print();
    cout << endl;

    cout << "dequeue()\t";
    try {
        cout << Queue_char.dequeue() << "\t\t";
    }

    catch (int e) {
        if (e) {
            cout << "exception\t";
        }
        else {
            cout << "exception\t";
        }
    }
    Queue_char.print();
    cout << endl;

    cout << "size()\t\t";
    cout << Queue_char.size() << "\t\t";
    Queue_char.print();
    cout << endl;

    cout << "enqueue(D)\t";
    Queue_char.enqueue('D');
    cout << "\t\t";
    Queue_char.print();
    cout << endl;

    cout << "isEmpty()\t";
    if (Queue_char.isEmpty()) {
         cout << "true\t\t";
    }  
    else {
        cout << "false\t\t";
    }
    Queue_char.print();
    cout << endl;

    cout << "front()\t\t";
    cout << Queue_char.front() << "\t\t";
    Queue_char.print();
    cout << endl;

    cout << "enqueue(T)\t";
    Queue_char.enqueue('T');
    cout << "\t\t";
    Queue_char.print();
    cout << endl;

    cout << "front()\t\t";
    cout << Queue_char.front() << "\t\t";
    Queue_char.print();
    cout << endl;
    
}
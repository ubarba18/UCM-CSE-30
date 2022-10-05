#include <iostream>
#include "Queue.h"

using namespace std;

int main(){
    Queue Queue; 

    for (int i = 0; i < 10; i++) {
        Queue.enqueue(i+1);
        cout << "Item " << i+1 << " has been added to the queue." << endl;
    }

    try {
        cout << "Front of the queue is: " << Queue.front() << endl;
        cout << "Size of the queue is: " << Queue.size() << endl;
    }

    catch (int e) {
        if (e) {
            cout << "Call to front() generated an exception, because the queue is empty";
        }
        else {
            cout << "Call to dequeue() generated an exception, because the queue is empty";
        }
    }

    while (!Queue.isEmpty())
    {
    try {
        cout << Queue.dequeue() << " has been dequeued.\n";
    }

    catch (int e) {
        if (e) {
            cout << "Call to front() generated an exception, because the queue is empty";
        }
        else {
            cout << "Call to dequeue() generated an exception, because the queue is empty";
        }
    }
    cout << "The content of the queue is now: [";
        Queue.print();
        cout << "]" << endl;
    }
    try {
        cout << Queue.dequeue() << " has been dequeued.\n";
    }

    catch (int e) {
        if (e) {
            cout << "Call to front() generated an exception, because the queue is empty";
        }
        else {
            cout << "Call to dequeue() generated an exception, because the queue is empty";
        }
    }
    cout << endl;
    try {
        cout << Queue.front() << "\n";
    }

    catch (int e) {
        if (e) {
            cout << "Call to front() generated an exception, because the queue is empty";
        }
        else {
            cout << "Call to dequeue() generated an exception, because the queue is empty";
        }
    }

}
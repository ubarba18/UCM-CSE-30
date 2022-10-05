#include <iostream>
#include "LinkedList_char.h"

using namespace std;

//Exercise 1
LinkedList_char::LinkedList_char() { //Constructor, Starts off null
	first = NULL; //Head
	last = NULL; //Tail
}


LinkedList_char::~LinkedList_char() { //Destructor
	Node* temp = first; 
	Node* nextNode = first;

	while(temp != last) {
		temp = nextNode;
		delete temp;
		nextNode = temp->next;
	}
}

void LinkedList_char::insertAtBack(char value) {
	
	Node* newNode = new Node(); //Create new node
	newNode->val = value;
	newNode->next = NULL;

	if (first == NULL) {
		first = newNode;
    }

	if (last == NULL) {
		last = newNode;
    }	
	else {
		last->next = newNode; //last's next is NewNode, so last is now NewNode
		last = newNode;
	}
	
}

bool LinkedList_char::removeFromBack() { 
	Node* temp = first;

        if(first == NULL){
        		return false;	
        }

        if(first == last){		
        		delete last;
        		first = NULL;
        		last = NULL;
        		return true;
        }

		while(temp->next != last){
                temp = temp->next; //Reach the end
        }
                delete last; 
                last = temp; //New last is the previous 
                return true;
}

void LinkedList_char::print() { //Print node
	
	int i = 0;
	Node* temp = first;
	
	while(i != size()) { //Print until we reach the size of the linked list
		cout << temp->val;
		temp = temp->next;
		i++;
		if (i != size())
			cout << ",";
		
	}
	
}

bool LinkedList_char::isEmpty() { //Check if node is empty
	if (first == NULL) {
		return true;
    }
	else {
		return false;
    }
}

int LinkedList_char::size() { //Check size
	int size = 0;

	if (isEmpty()) {
		return 0;
    }

	Node* temp = first;
	Node* nextNode = first;
	
    while(nextNode != last) { //Count until we reach the end of linkedlist
		temp = nextNode;
		nextNode = temp->next;
		size++;
	}
	size++;
	return size;
}

void LinkedList_char::clear() { //Same as deconstructor
	Node* temp = first;
	Node* nextNode = first;

	while(temp != last) {
		nextNode = temp->next;
		delete temp;
		temp = nextNode;
	}
	delete last;
	first = NULL;
	last = NULL;
}

//Exercise 2
void LinkedList_char::insertAtFront(char value) {
    
	Node* newNode = new Node();
	newNode->val = value;

	if (first == NULL){
		first = newNode;
	}
	if (last == NULL){
		last = newNode;
	}
	else{
		newNode->next = first; //NewNode's next is first, so first is now NewNode
		first = newNode;
	}
}

bool LinkedList_char::removeFromFront() {
	Node* temp = first;

	if (first == NULL){
		return false;
	}
		temp = temp->next;
		delete first;
		first = temp; //Next is new header
		return true;
}
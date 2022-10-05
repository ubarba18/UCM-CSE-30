#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string name;
    cout << "Please enter your name: ";
        getline (cin, name); //Gets entire line ex. First, Last
    cout << "Welcome to CSE030,  " << name << ".\n";
    return 0;
}
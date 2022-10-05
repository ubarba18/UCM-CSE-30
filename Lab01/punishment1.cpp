#include <iostream>
#include <string>
using namespace std;

int main () {
    
    int punishment;
    cout << "Enter the number of lines for the punishment: ";
    cin >> punishment;
    if (punishment <= 0) {
        cout << "You entered an incorrect value for the number of lines!" << endl;
    }
    for (int i = 0; i < punishment; i++){ 
        cout << "I will always use object oriented programming. ";
    }
    return 0;
}
#include <iostream>

using namespace std;

int main () {
    
    int punishment;
    int typo;
        cout << "Enter the number of lines for the punishment: ";
        cin >> punishment;
        if (punishment <= 0) { //incorrect values if less than or equal to 0
        cout << "You entered an incorrect value for the number of lines!" << endl;
        return 0;
    }
        cout << "Enter the line for which we want to make a typo: ";
        cin >> typo;

    
    if (typo <= 0) { //incorrect values if less than or equal to 0
        cout << "You entered an incorrect value for the number of lines!" << endl;
        return 0;
    }

    for (int i = 0; i < punishment; i++){ //repeats to length of punishment
        if (i + 1 == typo) {
            cout << "I will always use object oriented programing. ";
        }
        else {
        cout << "I will always use object oriented programming. ";
        }
    }


    return 0;
}
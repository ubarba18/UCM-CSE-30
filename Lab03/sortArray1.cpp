#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int sizeArr;
    
    cout << "Enter the size of the array: ";
    cin >> sizeArr;

    if (sizeArr < 0) {
        cout << "ERROR: you entered an incorrect value for the array size! ";
        return 0;
    }

    int userArray[sizeArr];
    cout << "Enter the numbers in the array, seperated by a space and press enter: ";

    for (int i = 0; i < sizeArr; i++) { //store data with loop
        cin >> userArray[i]; 
    }

    int cond;
    for (int i = 0; i < sizeArr; i++) {
        for (int j = i + 1; j < sizeArr; j++) { //Comparing value at i to i + 1
            if (userArray[j] > userArray[i]) { //If second value greater then swap
                cond = userArray[i]; //Will hold i value for later
                userArray[i] = userArray[j]; //Swap values 
                userArray[j] = cond;
            } 
        }
    }

    cout << "This is the sorted array in descending order: ";
    for (int j = 0; j < sizeArr; j++) { //Print the sorted array
        cout << userArray[j] << " ";
    }
    cout << endl;
    cout << "The algorithm selected the maximum for the traverse of the array.";

}
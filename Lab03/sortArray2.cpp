#include <iostream>
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

    int cond, swaps;
    for (int i = 0; i < sizeArr; i++) {
        int i2 = i;  

        for (int j = i + 1; j < sizeArr; j++) { //Comparing value at i to i + 1
            if (userArray[j] < userArray[i2]) { //If j < i
                i2 = j; //set second i to j
            } 
        }

        if (i2 > i) { //Only want to swap when j is > i
            cond = userArray[i];
            userArray[i] = userArray[i2];
            userArray[i2] = cond;
            swaps++;
        }
    }

    cout << "This is the sorted array in ascending order: ";
    for (int j = 0; j < sizeArr; j++) { //Print the sorted array
        cout << userArray[j] << " ";
    }   
    cout << endl;
    cout << "The algorithm selected the maximum for the traverse of the array. " << endl;
    cout<< "It took " << swaps << " swaps to sort the array. " ;
}
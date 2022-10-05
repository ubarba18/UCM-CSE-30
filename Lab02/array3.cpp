#include <iostream>
using namespace std;

int main() {
    int arrSize= 0;
    int numOfNeg = 0;

    cout << "Enter the size of a 2D array: ";
    cin >> arrSize;

    if (arrSize > 10) { 
        cout << "ERROR: your array is too large! Enter 1 to 10. ";
        return 0;
    }                      //Size of Array Between 1 through 10 only.
    if (arrSize < 0) {
        cout << "ERROR: you entered an incorrect value for the array size! ";
        return 0;
    }

    int userArray[arrSize][arrSize];
    for (int i = 0; i < arrSize; i++) {
        cout << "Enter the values in the array for row " << (i + 1) << ", seperated by a space and press enter: "; //Ask user to store values to i + 1 row
            for (int j = 0; j < arrSize; j++) {
                cin >> userArray[i][j]; // 
                
                if (userArray[i][j] < 0) {
                    numOfNeg++;
                }
            }
    }

    if (numOfNeg == 0) {
        cout << "All values are non-negative!" << endl;
    }
    else {
        cout << "There are " << numOfNeg << " negative values!" << endl;
    }

    return 0;
}
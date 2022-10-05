#include <iostream>
using namespace std;
 
int main() {
    int sizeArr = 0;
 
    cout << "Enter the size of the array: ";
    cin >> sizeArr;
 
    if (sizeArr < 0) {
        cout << "ERROR: you entered an incorrect value for the array size!";
        return 0;
    }
 
    cout << "Enter the numbers in the array, separated by a space, and press enter: " ;
 
    int value[sizeArr];
    for (int i = 0; i < sizeArr; i++) { //store data of values in array
        cin >> value[i];
    }
 
    int search;
    cout << "Enter a number to search for in the array: ";
    cin >> search;
 
    bool flag = false; //flag to see if number is not in array
    int check = 1;
    for (int i = 0; i < sizeArr; i++ ) {//Use loop to linearly search for a specific value
        if (value[i] == search) {
            cout << "Found value " << value[i] << " at index " << i << ", which took " << (i + 1) << " checks." << endl;
            flag = true;
            break;
        }
        check++;
    }

    if (!flag){
        cout << "The value " << search << " was not found in the array! ";
        return 0;
    }

    if (check == sizeArr) {
        cout << "We ran into the worst case scenario! ";
    }

    if (check == 1) {
        cout << "We ran into the best case scenario! ";
    }
    
    return 0;
}
 


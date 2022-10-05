#include <iostream>
#include <stdio.h>
 
using namespace std;
 
void sortArr(int sizeArr, int userArray[], int method) {
    
    int cond;
 
    if (method == 1)  {
        for (int i = 0; i < sizeArr; i++) {
            for (int j = i + 1; j < sizeArr; j++) { //Comparing value at i to i + 1
                if (userArray[j] > userArray[i]) { //If second value greater then swap
                    cond = userArray[i]; //Will hold i value for later
                    userArray[i] = userArray[j]; //Swap values 
                    userArray[j] = cond;
                }
            }
        }
    }
    
    else {
        //int swaps;
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
                // swaps++;
            }
        }
    }
}
 
int main () {
    int sizeArr;
    int cond;
    int temp;
    int i2;
    
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
 
    int method;
    cout << "Sort in ascending (0) or descending (1) order? ";
    cin >> method;
 
    sortArr(sizeArr, userArray, method);
    if (method == 1) 
        cout << "This is the sorted array in <descending> order: ";
 
    else
        cout << "This is the sorted array in <ascending> order: ";
 
    for (int j = 0; j < sizeArr; j++) { //Print the sorted array
        cout << userArray[j] << " ";
    }   
}
 


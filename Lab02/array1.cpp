#include <iostream>
using namespace std;
 
int main() {
 
    int sizeArr; 
    cout << "Enter the size of the array: ";
    cin >> sizeArr; //Set sizeArr to users input
 
    if(sizeArr <= 0) { //Check for user's input
        cout << "ERROR: you entered an incorrect value for the array size!";
        return 0;
    } 
 
    cout << "Enter the numbers in the array, sepereated by a space, and press enter: ";
    
    int userArray[sizeArr];
    int checker = 0;

    for(int i = 0; i < sizeArr; i++) {
        cin >> userArray[i]; //Get cin to read & store each of the number one by one

    }

    for (int i = 0; i < sizeArr - 1; i++) { //Loop if value increasing or not
    if (userArray[i] >= userArray[i + 1]){ //Check if number before is greater then next
          checker = 1;
          }
    }

    if (checker == 1) {
            cout << "This is NOT an increasing array!" << endl; //if first number is greater then NOT increasing
        }
    else {
        cout << "This IS an increasing array!" << endl; //If first number is less then it IS increasing
        }

    for (int i = 0; i < sizeArr; i++) { //Print array 
        cout << userArray[i] << " ";
    }
    
    return 0;
}


#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int checkArraySort(string *words, int data) {
    bool ascd, desc; //set up flags
    
    for (int i = 0; i < data - 1; i++) { //Ascending
            if (words[i] < words[i + 1]) { //Check if first number is less than second
                ascd = true;
            }
            else { //If first is greater than 
                ascd = false;
                break;
            }
        }

    for (int i = 0; i < data - 1; i++) { //Descending
            if (words[i] > words[i + 1]) { //Check if first number is greater than second
                desc = true;
            }
            else {
                desc = false;
                break;
            }
        }

    int sort;

    if (ascd) {
        sort = 1;
    }

    else if (desc) {
        sort = -1;
    }

    else {
        return 0;
    }

    return sort;
}

int binarySearchL(string *words, string k, int right) { //Binary Search Loop
    int left = 0;

  
    while (left <= right) {
        int mid = (left + (right - 1)) / 2; //Find middle of array, (left is 0: start of index)
//cout << mid;
        if (words[mid] == k) { //Check if k is at the middle
            return mid;
        }

        if (words[mid] < k) { //Check if k greater, ignore left
            left = mid + 1;
            //cout << left;
        }

        else {
            right = mid - 1; //If k is smaller than mid, ignore right
        }
    }

    return -1; //If k not present in array
}

int main (){
    int data = 0;
    ifstream fileIn;
    string *words;
    string word;

    fileIn.open("words_in.txt");

    if (fileIn.eof()) { //eof() will be false if no more data
        return 0;
    }

    while (!fileIn.eof()) { //eof() still true so data still remains
        fileIn >> word; //Read word
        data++;
    }
    fileIn.close();

    words = new string[data]; //create array with number of words given
    fileIn.open("words_in.txt");

    for (int i = 0; i < data; i++) {  //store words from input file
        fileIn >> words[i];
    }
    fileIn.close();

    if (checkArraySort(words, data) == 1) {
        cout<<"The array is sorted in ascending order! " << endl;
    }

    else if (checkArraySort(words, data) == -1) {
        cout<<"The array is sorted in descending order! " << endl;
    }

    else {
        cout << "The array is not sorted! " << endl;    //Exit program if not sorted
        return 0;
    }

    string k;
    cout << "Enter the key value to search for in the file: ";
    cin >> k;

    int bSLIndex = binarySearchL(words, k, data);

    if (bSLIndex == - 1) {
        cout << "The key " << k << " was not found in the array!" << endl;
    }

    else {
        cout << "Found the key " << k << " at index " << bSLIndex << endl;
    }

    return 0;
}
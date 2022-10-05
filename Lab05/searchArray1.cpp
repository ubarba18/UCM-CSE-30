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

int binarySearchR(string *words, string k, int left, int right) { //Binary Search recursively

    int mid = (left + (right - 1)) / 2;

    if (words[mid] == k) {  //check if key is in mid
        return mid;
    }

    else if (words[mid] > k) {
       return binarySearchR(words, k, left, mid - 1); //If mid greater than key, key must be in the left
    }

    else {
        return binarySearchR(words, k, mid + 1, right); //else key is greater than mid, must be in the right
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
        data++; //count lines before storing
    }
    fileIn.close();

    words = new string[data]; //create array with number of words given
    fileIn.open("words_in.txt");

    for (int i = 0; i < data; i++) {  //store words from input file, after knowing # of lines
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
        cout << "The array is not sorted! " << endl; //Exit program if not sorted
        return 0;
    }

    string k;
    cout << "Enter the key value to search for in the file: ";
    cin >> k;

    int bSRIndex = binarySearchR(words, k, 0, data);

    if (bSRIndex == - 1) {
        cout << "The key " << k << " was not found in the array!" << endl;
    }

    else {
        cout << "Found the key " << k << " at index " << bSRIndex << endl;
    }

    return 0;
}
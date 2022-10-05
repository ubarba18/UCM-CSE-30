#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int checkArraySort(string *words, int data) {
    bool ascd, desc; //set up flags
    
    // cout << words[0];
    // cout << words[1];
    // cout << (words[0] > words[1]);
    //cout << data;

    for (int i = 0; i < data - 1; i++) { //Ascending
            if (words[i] < words[i + 1]) { //Check if first number is less than second
                //cout << (words[i]);
                ascd = true;
            }
            else { //If first is greater than second
                //cout << "false";
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
        fileIn >> word; //get word
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
        cout<<"The array is sorted in ascending order! " << " ";
    }

    else if (checkArraySort(words, data) == -1) {
        cout<<"The array is sorted in descending order! " << " ";
    }

    else {
        cout << "The array is not sorted! " << " ";
        return 0;
    }
    return 0;
}
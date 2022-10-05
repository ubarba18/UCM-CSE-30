#include <iostream>
#include <fstream>
#include <assert.h>

using namespace std;

int main (){
    int data;
    ifstream fileIn; //input file stream
    string *words;
    string word;

    fileIn.open("words_in.txt");

    if (fileIn.eof()) { //eof() will be false if no more data
        return 0;
    }

    while (!fileIn.eof()) { //eof() [not false] still true so data still remains
        fileIn >> word; //get word
        data++; //Get # of words before storing words
    }
    fileIn.close();

    words = new string[data]; //create array allocated with number of words given
    fileIn.open("words_in.txt");

    for (int i = 0; i < data; i++) {  //store words from input file after learning # of lines
        fileIn >> words[i];
    }

    fileIn.close();

    ofstream fileOut; //output file stream

    fileOut.open("words_out.txt");
    for (int i = 0; i < data; i++) { //write words to output file
        fileOut << words[i] << "\n";
    }

    fileOut.close();
    return 0;
}
#include <iostream>
#include <string>
using namespace std;


int main () {

string word;
string reverse;

    cout << "Enter the string to reverse: ";
    cin >> word;
    reverse = word; 

    for (int i = 0; i < word.size(); i++) { //Loop for the size of word
        reverse[i] = word[word.size() - i - 1]; //Switching first with last
    }

    cout << reverse << endl;
    return 0;
}
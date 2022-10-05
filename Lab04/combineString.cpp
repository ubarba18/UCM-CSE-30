#include <iostream>
#include <string>
using namespace std;


string combineStr (string word, int num) {
    string resultant = word;

    for (int i = 0; i < num - 1; i++) {
        resultant += word;
    }

    return resultant;
}

int main() {
    string word;
    int num;
    cout << "Enter a string: ";
        cin >> word;

        cout << "Enter a number of times: ";
        cin >> num;

    if (num > 0) {
    cout << "The resulting string is " << combineStr(word, num);
    }

    else {
        return 0;
    }
    return 0;
}
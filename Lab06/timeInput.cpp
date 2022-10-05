#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Time {
    int hours;
    int minutes;
    int seconds;
};

bool getTimeFromUser(Time& time) {
    string my_line;
    getline(cin, my_line); //Grab the whole line to keep :

    if (!(my_line.find(":") == 2 && my_line.find(":", 3, 1) == 5)){ //Check if : are in correct positions
        return false;
    }
    
    time.hours = atoi(my_line.substr(0, 2).c_str()); //Convert pos 0-2 to int
    time.minutes = atoi(my_line.substr(3, 2).c_str()); 
    time.seconds = atoi(my_line.substr(6, 2).c_str());

    if (!(0 <= time.hours && time.hours < 24 && 0 <= time.minutes && time.minutes < 60 && 0 <= time.seconds && time.seconds < 60)) {
        return false;
    }
    return true;
}


void print24Hour(Time time) { //Fill in after turning into ints
    cout << setfill('0') << setw(2); //EX 02:00:00 turns into 2:0:0 fill to output 02:00:00
    cout << time.hours;
    cout << ":";
    cout << setfill('0') << setw(2);
    cout << time.minutes;
    cout << ":";
    cout << setfill('0') << setw(2);
    cout << time.seconds;
}

int main() {
    Time time1;
    Time time2;

    cout << "Enter the start time for the lecture (format is HH:MM:SS): ";

    if (!getTimeFromUser(time1)) {
        cout << "The start time entered is invalid! ";
        return 0;
    }

    cout << "Enter the end time for the lecture (format is HH:MM:SS): ";
    
    if (!getTimeFromUser(time2)) {
        cout << "The end time entered is invalid! ";
        return 0;
    }

    cout << "The lecture starts at ";
    print24Hour(time1); 
    cout << " and ends at ";
    print24Hour(time2);

    return 0;
}
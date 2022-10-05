#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

struct Time {
    int hours;
    int minutes;
    int seconds;
};

struct Course {
    string name;
    int credits;
    bool majorRequirement;
    double avgGrade;
    string days;
    Time startTime;
    Time endTime;
};

void getTimeFromLine(Time& time, string my_line) {

    time.hours = atoi(my_line.substr(0, 2).c_str()); //Convert pos 0-2 to int
    time.minutes = atoi(my_line.substr(3, 2).c_str());
    time.seconds = atoi(my_line.substr(6, 2).c_str());
}

void print12Hour(Time time) { //Fill in after turning into ints
    cout << setfill('0') << setw(2); //turn time given to 12hour format
    if (time.hours % 12 == 0) { 
        cout << 12;
    }
    else {
    cout << (time.hours % 12);
    }
    cout << ":";
    cout << setfill('0') << setw(2); //EX 02:03:20 turns into 2:3:20 fill to 02:03:20
    cout << time.minutes;
    cout << ":";
    cout << setfill('0') << setw(2);
    cout << time.seconds;

    if (time.hours > 12) {
        cout << "pm";
    }
    else {
        cout << "am";
    }
}

void printCourses(Course courses[], int numCourses) {
    cout << "___________________\n";
    cout << "SCHEDULE OF STUDENT\n";
    
    for (int i = 0; i < numCourses; i++) { //Print components of courses
        cout << "___________________\n";
        cout << "COURSE " << i + 1 << ": "<< courses[i].name << "\n";
        if (courses[i].majorRequirement == 0) 
        cout << "Note: this course is not a major requirement...\n";

        else {
            cout << "Note: this course is a major requirement!\n";
        }
        cout << "Number of Credits: " << courses[i].credits << "\n";
        cout << "Days of Lectures: " << courses[i].days << "\n";

        cout << "Lecture Time: ";
        print12Hour(courses[i].startTime);
        cout << " - ";
        print12Hour(courses[i].endTime);
        cout << "\nStat: on average students get " << courses[i].avgGrade << "\% in this course.\n";
    }

}

int main() {
    ifstream fileIn;
    string sent;

    fileIn.open("in.txt"); 
    if (!fileIn)
     {
          cerr<< "Unable to open file" << endl;
          exit(1);
     }

    getline(fileIn, sent); //Get first value of how many courses
    int numCourses = atoi(sent.c_str());
    Course courses[numCourses]; //create array store store components of a course

    for (int i = 0; i < numCourses; i++) { //i=0 first course, i=1 second course, etc.
         getline(fileIn, courses[i].name);
         getline(fileIn, sent);
         courses[i].credits = atoi(sent.c_str());
         getline(fileIn, sent);
         courses[i].majorRequirement = atoi(sent.c_str());
         getline(fileIn, sent);
         courses[i].avgGrade = atof(sent.c_str());
         getline(fileIn, courses[i].days);
         getline(fileIn, sent);
         getTimeFromLine(courses[i].startTime, sent);
         getline(fileIn, sent);
         getTimeFromLine(courses[i].endTime, sent);
    }
    printCourses(courses, numCourses);

    fileIn.close();
    return 0;
}
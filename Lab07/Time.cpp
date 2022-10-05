#include <iostream>
#include "Time.h"

using namespace std;

Time :: Time () { //Default constructor, initializing with 0.
    hours = 0;
    minutes = 0;
    seconds = 0;
}

Time :: Time (int hours, int minutes, int seconds) { //Extra constructor, set the instance variables to original variables.
    this->hours = hours;
    this->minutes = minutes;
    this->seconds = seconds;
};

Time :: ~Time() {}; //Deconstructor, does nothing.

int Time :: getHours () { //Accessor
    return hours;
}

void Time :: setHours (int hours){ //Mutator
    this->hours = hours;
}

int Time :: getMinutes(){ //Accessor
    return minutes;
}

void Time :: setMinutes(int minutes) { //Mutator
    this->minutes = minutes;
}

int Time :: getSeconds(){ //Accessor
    return seconds;
}

void Time :: setSeconds(int seconds){ //Mutator
    this->seconds = seconds;
}
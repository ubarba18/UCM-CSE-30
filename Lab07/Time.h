class Time {
    int hours; //Hours, minutes, seconds already private
    int minutes;
    int seconds;

    public:
        void setHours(int hours);  //Mutator
        void setMinutes(int minutes); //Mutator
        void setSeconds(int seconds); //Mutator
        int getHours(); //Accessor
        int getMinutes(); //Accessor
        int getSeconds(); //Accessor
        Time(); //Default Constructor
        Time(int hours, int minutes, int seconds); //Extra Constructor
        ~Time(); //Destructor, does nothing
};
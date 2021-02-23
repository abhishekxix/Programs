#include <iostream>

class Time {
    friend void add_time(const Time &time1, const Time &time2);
private :
    int hours;
    int minutes;
    int seconds;

public :
    Time(int hours = 0, int minutes = 0, int seconds = 0);
    ~Time();
};

Time::Time(int hours, int minutes, int seconds)
    : hours {hours}, minutes {minutes}, seconds {seconds}
{}

Time::~Time() {

}

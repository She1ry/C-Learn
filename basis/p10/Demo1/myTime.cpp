#include <iostream>
#include "myTime.h"

Time::Time(int hours, int minutes) {
    this->hours_=hours;
    this->minutes_=minutes;
}

Time::Time(int hours) {
    hours_=hours;
    minutes_=0;
}


void Time::set(int hours, int minutes) {
    this->hours_=hours;
    this->minutes_=minutes;
}

void Time::show() const {
    std::cout<<"H: "<<hours_
        <<",M: "<<minutes_<<std::endl;
}

Time Time::operator+(const Time & t) const {
    int m = minutes_+t.minutes_;
    int h = this->hours_+t.hours_+m/60;
    m %=60;
    h %=12;
    return Time{h,m};
}

void operator<<(std::ostream &os, const Time &t) {
    os<<"H: "<<t.hours_
       <<",M: "<<t.minutes_<<std::endl;
}

Time::operator int() const {
    return hours_;
}

Time::~Time() {
    std::cout<<"Îö¹¹";
}







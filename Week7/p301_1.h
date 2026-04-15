#ifndef MYTIME_H
#define MYTIME_H

#include <iostream>
#include <iomanip> 

class MyTime {
private:
    int hour, min, sec, msec;

public:
    void reset();
    void convert(double duration);
    void print();
    MyTime add(MyTime t);
    void read();
};

#endif
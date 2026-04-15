#include <iostream>
#include <time.h>
struct MyTime
{
    int hour;
    int min;
    int sec;
    int msec;
};

MyTime addTime1(MyTime t1, MyTime t2);
void addTime2(MyTime t1, MyTime t2, MyTime& t3);
void addTime3(MyTime t1, MyTime t2, MyTime* pt);

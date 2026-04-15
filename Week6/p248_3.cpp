#include "p248_3.hpp"
using namespace std;

MyTime addTime1(MyTime t1, MyTime t2) //값에 의한 전달
{
    int addhour = t1.hour + t2.hour;
    int addmin = t1.min + t2.min;
    int addsec = t1.sec + t2.sec;
    int addmsec = t1.msec + t2.msec;

    printf("%d시간 %d분 %d초 %d", addhour, addmin, addsec, addmsec);
}

void addTime2(MyTime t1, MyTime t2, MyTime& t3) //참조에 의한 전달
{
    int addhour = t1.hour + t2.hour;
    int addmin = t1.min + t2.min;
    int addsec = t1.sec + t2.sec;
    int addmsec = t1.msec + t2.msec;

    if (addmin >= 60)
        addmin / 60;

    t3.hour = addhour;
    t3.min = addmin;
    t3.sec = addsec;
    t3.msec = addmsec;
}

void addTime3(MyTime t1, MyTime t2, MyTime* pt) //주소에 의한 전달
{
    int addhour = t1.hour + t2.hour;
    int addmin = t1.min + t2.min;
    int addsec = t1.sec + t2.sec;
    int addmsec = t1.msec + t2.msec;

    pt->hour = addhour;
    pt->min = addmin;
    pt->sec = addsec;
    pt->msec = addmsec;
}

int main()
{
    MyTime t1 = { 1, 20, 30, 500};
    MyTime t2 = { 0, 10, 20, 200};
    return 0;
}
#include "p301_1.h"

using namespace std;


void MyTime::reset() {
    hour = min = sec = msec = 0;
}

void MyTime::print() {
    cout << setfill('0') << setw(2) << hour << ":" << setw(2) << min << ":" 
         << setw(2) << sec << ":" << setw(3) << msec << endl;
}


int main() {
    MyTime t;
    t.reset();
    t.print();
    return 0;
}
#include <iostream>
using namespace std;
class Sample1{
    public:
        Sample1() {}
        virtual void play() { cout << "1번 sample" << endl; } 
        /*virtual void play() { cout << "1번 sample" << endl; } 일때 출력 결과: 
        1번 sample 
        2번 sample 
        3번 sample 
        3번 sample
        */
};
class Sample2 : public Sample1{
    public:
        Sample2() {}
        void play() { cout << "2번 sample" << endl; }
};
class Sample3 : public Sample1{
    public:
        Sample3() {}
        void play() { cout << "3번 sample" << endl; }
};
class Sample4 : public Sample1{
    public:
        Sample4() {}
        void play() { cout << "3번 sample" << endl; }
};
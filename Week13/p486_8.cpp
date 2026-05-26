#include "p486_8.hpp"

int main(){
    Sample1* arr[4];
    //자료형이 Sample2*일 때 출력 결과: 오류발생
    Sample1* a = new Sample1();
    Sample2* b = new Sample2();
    Sample3* c = new Sample3();
    Sample4* d = new Sample4();
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    arr[3] = d;
    for(int i = 0; i < 4; i++) arr[i]->play();
}

/*출력 결과:
1번 sample
1번 sample
1번 sample
1번 sample
*/
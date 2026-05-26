#include <iostream>

class Point {
    protected: //protected >> public으로 변경시 
        int x, y;
    public:
        Point(int xx, int yy) : x(xx), y(yy){ }
        void draw() 
        {
            std::cout << x << "," << y << "에 점을 그려라.\n";
        }
};

class Rectangle : public Point  
{
    protected:
        int width, height;
    public:
        void draw()
        {
            std::cout << x << "," << y << "에 가로" << width << "세로" << height << "인 사각형을 그려라.\n";
        }
};
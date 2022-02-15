#include <iostream>
using namespace std;

class Point
{
    private:
        int x, y;
    public:
        Point() : x(0), y(0) {}
        Point(int x, int y) : x(x), y(y) {}
}

class Line
{
    private:
        Point *p1;
        Point *p2;
    public:
        Line(Point &p1, Point &p2) : p1(p1), p2(p2) {}

        void setPoints(Point &p1, Point &p2)
        {
            this->p1 = p1;
            this->p2 = p2;
        }
}

int main() {
	Point a, b
	return 0;
}

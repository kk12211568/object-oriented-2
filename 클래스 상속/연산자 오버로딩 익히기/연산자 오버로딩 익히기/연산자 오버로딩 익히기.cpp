#include <iostream>
using namespace std;

class Point
{
private:
    int x;
    int y;

public:
    Point() {};

    Point(int x_, int y_)
    {
        x = x_; y = y_;
    }
    void GetPoint()
    {
        cout << "( " << x << ", " << y << " )" << endl;
    }

    Point operator++()
    {
        ++x; ++y;
        return *this;             //클래스 자기자신을 리턴할때 *this 사용
    }

    Point operator--()
    {
        --x; --y;
        return *this;
    }

    Point operator+(Point ob)
    {
        Point temp;
        temp.x = x + ob.x;
        temp.y = y + ob.y;
        return temp;
    }

    void operator!=(Point ob)
    {
        if (x != ob.x || y != ob.y) { cout << 'T'; }
        else { cout << 'F'; }
    }
};
int main()
{
    Point point1(8, 10);
    Point point2(-10, 15);
    Point point3(9, 10);

    ++point1; point1.GetPoint();
    ++point2; point2.GetPoint();

    Point ob = point1 + point2;
    ob.GetPoint();

    point1 != point3;
}
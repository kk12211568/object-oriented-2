#include <iostream>
using namespace std;

class point
{
private:
    int x;
    int y;

public:
    point() {};
    point(int x_, int y_)
    {
        x = x_; y = y_;
    }
    void print()
    {
        cout << "( " << x << ", " << y << " )" << endl;
    }

    point operator*(point ob) const
    {
        point temp;
        temp.x = x * ob.x;
        temp.y = y * ob.y;
        return temp;
    }
    point operator*(int k) const
    {
        point temp;
        temp.x = x * k;
        temp.y = y * k;
        return temp;
    }

    friend point operator*(int k, point& ob)
    {
        point temp;
        temp.x = ob.x * k;
        temp.y = ob.y * k;
        return temp;
    }
};


int main()
{
    point ob(10, 8);
    point ob2, ob3;

    ob2 = ob * 10;
    ob2.print();

    ob3 = 10 * ob;              //friend 비멤버 함수 선언 했을때만 가능 (*순서 바뀔 때*)
    ob3.print();
}
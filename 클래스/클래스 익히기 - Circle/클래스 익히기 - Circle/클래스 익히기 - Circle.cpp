#include <iostream>
using namespace std;

class Circle
{   
    private:
        const double PI = 3.14;           //멤버함수에 계속 등장하는 '상수'는 const로 지정해놓으면 편함!
        double radius;                    //TV 속 (접근 불가)
    public:
        double getRadius() const;
        double getArea() const;
        double getPerimeter() const;
        void setRadius(double value);      //리모컨(으로 TV속 컨트롤 가능)


};
double Circle::getRadius() const
{
    return radius;
}
double Circle::getArea() const
{
    const double PI = 3.14;
    return radius * radius * PI;
}
double Circle::getPerimeter() const
{   
    
    return 2*radius * PI;
}
void Circle::setRadius(double value)
{
    radius = value;
}

int main()
{
    cout << "Circle 1: " << endl;
    Circle circle1;                  //객체1 생성
    circle1.setRadius(8.0);
    cout << "Radius: " << circle1.getRadius() << endl;
    cout << "Area: " << circle1.getArea() << endl;
    cout << "Perimeter: " << circle1.getPerimeter() << endl << endl;

    cout << "Circle 2: " << endl;
    Circle circle2;
    circle2.setRadius(16.0);
    cout << "Radius:" << circle2.getRadius() << endl;
    cout << "Area: " << circle2.getArea() << endl;
    cout << "Perimeter: " << circle2.getPerimeter() << endl;
    
    return 0;

}
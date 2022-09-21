#include <iostream>
using namespace std;

class Circle
{
private:
	int const PI = 3.14;
	double radius;

public:
	Circle(double radius);
	Circle();
	~Circle();                           //객체가 자신이 선언된 스코프를 벗어날때 자동호출됨, 생성된 반대 순서로 소멸됨(스택&큐)
	Circle(const Circle& circle);        //말그대로 '복사 생성자'
	void setRadius(double radius);
	double getRadius() const;
	double getArea() const;
	double getPerimeter() const;
};
Circle::Circle(double radius)
{
	cout << "매개변수가 있는 생성자가 호출되었습니다." << endl;
}
Circle::Circle()
{
	cout << "기본 생성자가 호출되었습니다." << endl;            //말그대로 '기본' --> 자동으로 0.0으로 초기화 됨.
}
Circle::~Circle()
{
	cout << "소멸자가 호충되었습니다." << endl;
}
Circle::Circle(const Circle& circle)
{
	cout << "복사 생성자가 호출되었습니다." << endl;
}
void Circle::setRadius(double r)
{
	radius = r;
}
double Circle::getRadius() const
{
	return radius;

}
double Circle::getArea() const
{
	return radius * radius * PI;
}
double Circle::getPerimeter() const
{
	return 2 * radius * PI;
}

int main()
{
	Circle circle1(1.2);

	Circle circle2(circle1);       //circle1의 복사 생성자인 circle2 "ㄹㅇ 복사"

	Circle circle3;                //기본 생성자 circle3 --> 자동으로 0으로 초기화됨. (0 = 쓰레기값 ㅋ)
}
#include <iostream>
using namespace std;

class Rectangle
{
private:
	int width;
	int height;

public:
	Rectangle(int w, int h);
	~Rectangle();
	int get_width();
	int get_height();
	int area() const;
	int perimeter() const;
	bool is_square() const;
};
Rectangle::Rectangle(int w, int h)
{
	width = w;
	height = h;
}
Rectangle::~Rectangle()
{
	cout << "직사각형이 소멸되었습니다." << endl;
}
int Rectangle::get_width()
{
	return width;
}
int Rectangle::get_height()
{
	return height;
}
int Rectangle::area() const
{
	return width * height;
}
int Rectangle::perimeter() const
{
	return 2 * width + 2 * height;
}
bool Rectangle::is_square() const
{
	if (width == height) return true;
	else false;
}

int main()
{
	Rectangle rect1(10,9);
	cout << "가로: " << rect1.get_width() << ", 세로: " << rect1.get_height() << endl;
	cout << "넓이: " << rect1.area() << ", 둘레:" << rect1.perimeter() << endl;
	cout << "정사각형인가요? ";
	if (rect1.is_square() == true) cout << "Yes!";
	else cout << "No!";
	
	cout << endl << endl;
	Rectangle rect2(16, 16);
	cout << "가로: " << rect2.get_width() << ", 세로: " << rect2.get_height() << endl;
	cout << "넓이: " << rect2.area() << ", 둘레:" << rect2.perimeter() << endl;
	cout << "정사각형인가요? ";
	if (rect2.is_square() == true) cout << "Yes!";
	else cout << "No!";
	cout << endl << endl;



}

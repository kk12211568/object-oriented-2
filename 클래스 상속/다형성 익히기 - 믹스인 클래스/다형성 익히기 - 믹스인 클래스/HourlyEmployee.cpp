#include "헤더.h"

HourlyEmployee::HourlyEmployee(string n, int hp, int h)
{
	name = n;
	HourlyPay = hp;
	hour = h;
}

void HourlyEmployee::print()
{
	cout << "고용인 '" << name << "'의 월급은 " << HourlyPay * hour << "만원 입니다." << endl << endl;
}

#include "���.h"

HourlyEmployee::HourlyEmployee(string n, int hp, int h)
{
	name = n;
	HourlyPay = hp;
	hour = h;
}

void HourlyEmployee::print()
{
	cout << "����� '" << name << "'�� ������ " << HourlyPay * hour << "���� �Դϴ�." << endl << endl;
}

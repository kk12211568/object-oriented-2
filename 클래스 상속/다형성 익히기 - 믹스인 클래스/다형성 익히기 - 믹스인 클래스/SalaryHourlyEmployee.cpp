#include "���.h"

SalaryHourlyEmployee::SalaryHourlyEmployee(string n, int sp, int hp, int h)
{
	name = n;
	SalaryPay = sp;
	HourlyPay = hp;
	hour = h;
}

void SalaryHourlyEmployee::print()
{
	if (hour > 180)
	{	
		cout << "����� '" << name << "'�� ������ " << SalaryPay + HourlyPay * (hour - 180) << "���� �Դϴ�." << endl << endl;
	}
	else
	{
		cout << "����� '" << name << "'�� ������ " << SalaryPay << "���� �Դϴ�." << endl << endl;
	}
}

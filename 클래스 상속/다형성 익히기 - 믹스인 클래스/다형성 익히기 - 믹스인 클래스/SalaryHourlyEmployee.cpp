#include "헤더.h"

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
		cout << "고용인 '" << name << "'의 월급은 " << SalaryPay + HourlyPay * (hour - 180) << "만원 입니다." << endl << endl;
	}
	else
	{
		cout << "고용인 '" << name << "'의 월급은 " << SalaryPay << "만원 입니다." << endl << endl;
	}
}

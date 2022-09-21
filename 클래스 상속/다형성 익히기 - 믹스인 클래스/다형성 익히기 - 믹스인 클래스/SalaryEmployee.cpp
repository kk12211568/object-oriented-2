#include "헤더.h"

SalaryEmployee::SalaryEmployee(string n, int sp)
{
	name = n;
	SalaryPay = sp;
}

void SalaryEmployee::print()
{
	cout << "고용인 '" << name << "'의 월급은 " << SalaryPay << "만원 입니다." << endl << endl;
}


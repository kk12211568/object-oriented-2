#include "���.h"

SalaryEmployee::SalaryEmployee(string n, int sp)
{
	name = n;
	SalaryPay = sp;
}

void SalaryEmployee::print()
{
	cout << "����� '" << name << "'�� ������ " << SalaryPay << "���� �Դϴ�." << endl << endl;
}


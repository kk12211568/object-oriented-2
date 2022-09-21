#include "헤더.h"

Employee::Employee(string n)
{
	name = n;
}

void Employee::print()
{
	cout << "고용인 '" << name << "'" << endl << endl;
}

Employee::~Employee()
{

}
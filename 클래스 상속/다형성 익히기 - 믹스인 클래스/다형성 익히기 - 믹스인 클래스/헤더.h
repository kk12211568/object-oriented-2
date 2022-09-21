#pragma once

#include <iostream>
using namespace std;

class Employee
{
protected:
	string name;

public:
	Employee(string n);
	Employee() {};                        //�⺻ ������ ( �������Ͽ��� ���� ���� X )
	~Employee();
	void print();
};

class SalaryType
{
protected:
	int SalaryPay;

public:
	virtual void print() = 0;             //���� ���� �Լ�( ���� X ) --> �Ļ� Ŭ�������� �����ϰԲ� ����
};

class HourlyType
{
protected:
	int HourlyPay;
	int hour;                            //�Ѵ޿� ���ϴ� �ð�

public:
	virtual void print() = 0;            //���� ���� �Լ�( ���� X ) --> �Ļ� Ŭ�������� �����ϰԲ� ����
};

class SalaryEmployee : public SalaryType, public Employee
{
public:
	SalaryEmployee(string n, int sp);
	void print();
};

class SalaryHourlyEmployee : public SalaryType, public HourlyType, public Employee
{
public:
	SalaryHourlyEmployee(string n, int sp, int hp, int h);
	void print();
};

class HourlyEmployee : public HourlyType, public Employee
{
public:
	HourlyEmployee(string n, int hp, int h);
	void print();
};
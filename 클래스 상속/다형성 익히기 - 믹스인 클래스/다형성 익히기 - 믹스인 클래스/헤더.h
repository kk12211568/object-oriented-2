#pragma once

#include <iostream>
using namespace std;

class Employee
{
protected:
	string name;

public:
	Employee(string n);
	Employee() {};                        //기본 생성자 ( 구현파일에서 따로 정의 X )
	~Employee();
	void print();
};

class SalaryType
{
protected:
	int SalaryPay;

public:
	virtual void print() = 0;             //순수 가상 함수( 정의 X ) --> 파생 클래스에서 정의하게끔 강제
};

class HourlyType
{
protected:
	int HourlyPay;
	int hour;                            //한달에 일하는 시간

public:
	virtual void print() = 0;            //순수 가상 함수( 정의 X ) --> 파생 클래스에서 정의하게끔 강제
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
#pragma once

#include <iostream>
using namespace std;

template<typename T>
class Stack
{
private:
	T* ptr;			// �� �޸� ������ ���� ������ ����
	int capacity;
	int size;

public:
	Stack(int capacity);
	~Stack();
	void push(const T& element);	// return�� ���� (void)
	T pop();						// return�� = �ڷ��� T
};
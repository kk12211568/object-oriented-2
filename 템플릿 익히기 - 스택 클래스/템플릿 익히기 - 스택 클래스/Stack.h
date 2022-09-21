#pragma once

#include <iostream>
using namespace std;

template<typename T>
class Stack
{
private:
	T* ptr;			// 힙 메모리 생성을 위한 포인터 선언
	int capacity;
	int size;

public:
	Stack(int capacity);
	~Stack();
	void push(const T& element);	// return값 없음 (void)
	T pop();						// return값 = 자료형 T
};
#include "Stack.h"

template<typename T>
Stack<T>::Stack(int cap)
	:capacity(cap), size(0)		//초기값 선언
{
	ptr = new T[capacity];		//배열 동적 할당
}

template<typename T>
Stack<T>::~Stack()
{
	delete[] ptr;
}

template<typename T>
void Stack<T>::push(const T& element)
{
	if (size < capacity)
	{
		ptr[size] = element;
		size++;
	}
	else
	{
		cout << "스택이 꽉 차서 삽입할 수 없습니다." << endl;
	}
}

template<typename T>
T Stack<T>::pop()
{
	if (size > 0)
	{	
		T temp = ptr[size -1];		//배열에서 마지막 순서 = size - 1
		size--;
		return temp;
	}
	else
	{
		cout << "스택이 비어서 삭제할 수 없습니다." << endl;
	}
}


#include "Stack.h"

template<typename T>
Stack<T>::Stack(int cap)
	:capacity(cap), size(0)		//�ʱⰪ ����
{
	ptr = new T[capacity];		//�迭 ���� �Ҵ�
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
		cout << "������ �� ���� ������ �� �����ϴ�." << endl;
	}
}

template<typename T>
T Stack<T>::pop()
{
	if (size > 0)
	{	
		T temp = ptr[size -1];		//�迭���� ������ ���� = size - 1
		size--;
		return temp;
	}
	else
	{
		cout << "������ �� ������ �� �����ϴ�." << endl;
	}
}


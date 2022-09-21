#pragma once

#include <iostream>
using namespace std;

class Set
{
private:
    int array[100];
    int len;

public:
    Set() { len = 0; };
    ~Set() {};
    
    int getlen() { return len; }
    int find(int n)
    {
        for (int i = 0; i < len; i++)
        {
            if (array[i] == n) return i;  // return하면 함수 끝
        }
        return -1;
    }
    Set operator+=(int n)
    {   
        Set& temp = *this;                // *this 포인터 받으려면 "주소"로 받아야됨!!!!!!
        if (find(n) == -1)
        {
            temp.array[len] = n;
            temp.len++;
        }
        return temp;
    }
    Set operator-=(int n)
    {
        Set temp;
        for (int i = 0; i < len; i++)
        {
            if (i != find(n)) temp += array[i];
        }
        temp.len--;
        return temp;
    }

    friend Set operator*(Set& ob1, Set& ob2);

    friend Set operator+(Set& ob1, Set& ob2);

    friend Set operator-(Set& ob1, Set& ob2);

    void print()
    {   
        cout << "{ ";
        for (int i = 0; i < len; i++)
        {
            cout << array[i] << ", ";
        }
        cout << "}" << endl;
    }

};

Set operator*(Set& ob1, Set& ob2)
{
    Set temp;
    for (int i = 0; i < ob2.len; i++)
    {
        if (ob1.find(ob2.array[i]) != -1)
        {
            temp += ob2.array[i];
        }
    }
    return temp;
}

Set operator+(Set& ob1, Set& ob2)
{
    Set temp = ob1;
    for (int i = 0; i < ob2.len; i++)
    {
        if (ob1.find(ob2.array[i]) == -1)
        {
            temp += ob2.array[i];
        }
    }
    return temp;
}

Set operator-(Set& ob1, Set& ob2)
{
    Set temp;
    for (int i = 0; i < ob1.len; i++)
    {
        if (ob2.find(ob1.array[i]) == -1)
        {
            temp += ob1.array[i];
        }
    }
    return temp;
}
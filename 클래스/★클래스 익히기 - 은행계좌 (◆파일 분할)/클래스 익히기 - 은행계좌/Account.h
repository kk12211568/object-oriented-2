#pragma once
#include <iostream>
#include <cassert>
using namespace std;

class Account
{
private:
    int accNumber;
    int balance;
    static int base; 
public:
    Account(int bal);
    ~Account();
    void checkBalance() const;
    void deposit(int amount);
    void withdraw(int amount);

};

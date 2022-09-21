#include "Account.h"


int Account::base = 0;
Account::Account(int bal)
{
    if (bal < 0.0) {

        cout << "�ܾ��� ������ �� �� �����ϴ�. ���α׷��� �����մϴ�.";
        assert(false);
    }
    base++;
    accNumber = 100000 + base;
    balance = bal;

    cout << "����_#" << accNumber << "�� ����������ϴ�." << endl;
    cout << "�ܾ� $" << balance << endl << endl;
}
Account::~Account()
{
    cout << "����_#" << accNumber << "�� �������ϴ�." << endl;
    cout << "$" << balance << "�� ������ ���½��ϴ�." << endl << endl;
}
void Account::checkBalance() const
{
    cout << "����_#" << accNumber << endl;
    cout << "Ʈ����� - �ܾ� Ȯ��" << endl << "�ܾ�: $" << balance << endl << endl;
}
void Account::deposit(int am)
{
    if (am > 0) {
        cout << "����_#" << accNumber << endl;
        balance += am;
        cout << "Ʈ����� - deposit of $" << am << endl << "����� �ܾ�: $" << balance << endl << endl;
    }
    else cout << "Ʈ������� �ߴܵǾ����ϴ�." << endl;
}
void Account::withdraw(int am)
{
    if (am > balance) am = balance;
    cout << "����_#" << accNumber << endl;
    balance -= am;
    cout << "Ʈ����� - ����: $" << am << endl << "����� �ܾ�: $" << balance << endl << endl;
}
#include <iostream>
#include <cassert>
using namespace std;


class Account
{
    private:
        int accNumber;
        int balance;
        static int base;               //static 안하면 (정적 데이터 멤버 선언 안하면) 한번만 변경됨. 지속적인 사용 안됨.
public:
        Account(int bal);
        ~Account();
        void checkBalance() const;
        void deposit(int amount);
        void withdraw(int amount);

};
int Account::base = 0;                 // '정적 데이터 멤버' 의 초기화 방법
Account::Account(int bal)
{
    if (bal < 0.0) {
        
        cout << "잔액은 음수가 될 수 없습니다. 프로그램을 종료합니다.";
        assert(false);
    }
    base++;
    accNumber = 100000 + base;
    balance = bal;

    cout << "계좌_#" << accNumber << "이 만들어졌습니다." << endl;
    cout << "잔액 $" << balance << endl << endl;
}
Account::~Account()
{
    cout << "계좌_#" << accNumber << "이 닫혔습니다." << endl;
    cout << "$" << balance << "를 고객에게 보냈습니다." << endl << endl;
}
void Account::checkBalance() const
{
    cout << "계좌_#" << accNumber << endl;
    cout << "트랜잭션 - 잔액 확인" << endl << "잔액: $" << balance << endl << endl;
}
void Account::deposit(int am)
{   
    if (am > 0) {
        cout << "계좌_#" << accNumber << endl;
        balance += am;
        cout << "트랜잭션 - deposit of $" << am << endl << "변경된 잔액: $" << balance << endl << endl;
    }
    else cout << "트랜잭션이 중단되었습니다." << endl;
}
void Account::withdraw(int am)
{   
    if (am > balance) am = balance;
    cout << "계좌_#" << accNumber << endl;
    balance -= am;
    cout << "트랜잭션 - 인출: $" << am << endl << "변경된 잔액: $" << balance << endl << endl;
}
int main()
{
    Account kakao(2000);
    Account hana(5000);
    Account toss(1000);

    kakao.deposit(150);
    hana.checkBalance();
    kakao.checkBalance();
    toss.withdraw(800);
    kakao.withdraw(1000);
    hana.deposit(120);
    return 0;

}

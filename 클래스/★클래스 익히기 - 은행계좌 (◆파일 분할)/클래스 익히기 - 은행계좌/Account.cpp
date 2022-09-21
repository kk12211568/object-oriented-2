#include "Account.h"


int Account::base = 0;
Account::Account(int bal)
{
    if (bal < 0.0) {

        cout << "ÀÜ¾×Àº À½¼ö°¡ µÉ ¼ö ¾ø½À´Ï´Ù. ÇÁ·Î±×·¥À» Á¾·áÇÕ´Ï´Ù.";
        assert(false);
    }
    base++;
    accNumber = 100000 + base;
    balance = bal;

    cout << "°èÁÂ_#" << accNumber << "ÀÌ ¸¸µé¾îÁ³½À´Ï´Ù." << endl;
    cout << "ÀÜ¾× $" << balance << endl << endl;
}
Account::~Account()
{
    cout << "°èÁÂ_#" << accNumber << "ÀÌ ´ÝÇû½À´Ï´Ù." << endl;
    cout << "$" << balance << "¸¦ °í°´¿¡°Ô º¸³Â½À´Ï´Ù." << endl << endl;
}
void Account::checkBalance() const
{
    cout << "°èÁÂ_#" << accNumber << endl;
    cout << "Æ®·£Àè¼Ç - ÀÜ¾× È®ÀÎ" << endl << "ÀÜ¾×: $" << balance << endl << endl;
}
void Account::deposit(int am)
{
    if (am > 0) {
        cout << "°èÁÂ_#" << accNumber << endl;
        balance += am;
        cout << "Æ®·£Àè¼Ç - deposit of $" << am << endl << "º¯°æµÈ ÀÜ¾×: $" << balance << endl << endl;
    }
    else cout << "Æ®·£Àè¼ÇÀÌ Áß´ÜµÇ¾ú½À´Ï´Ù." << endl;
}
void Account::withdraw(int am)
{
    if (am > balance) am = balance;
    cout << "°èÁÂ_#" << accNumber << endl;
    balance -= am;
    cout << "Æ®·£Àè¼Ç - ÀÎÃâ: $" << am << endl << "º¯°æµÈ ÀÜ¾×: $" << balance << endl << endl;
}
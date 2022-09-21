#include "Account.h"

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
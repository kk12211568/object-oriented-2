#include "헤더.h"

int main()
{
    Employee jg("Jack Grealish");
    SalaryEmployee hk("Harry Kane", 300);
    SalaryHourlyEmployee mm("Mason Mount", 200, 5, 190);
    HourlyEmployee jh("Jordan Henderson", 8, 100);

    jg.print();
    hk.print();
    mm.print();
    jh.print();

    return 0;
}
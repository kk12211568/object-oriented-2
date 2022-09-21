#include "헤더.h"

int main()
{
    Set set1; Set set2;

    set1 += 1;
    set1 += 2;
    set1 += 3; 
    set1 += 4;
    set1 += 5;

    set2 += 2;
    set2 += 4;
    set2 += 6;

    Set uni = set1 + set2;
    Set inter = set1 * set2;
    Set diff = set1 - set2;
    Set diff2 = set2 - set1;

    set1.print();
    cout << set1.getlen() << endl;
    set2.print();
    cout << set2.getlen() << endl;
    uni.print();
    inter.print();
    diff.print();
    diff2.print();

}
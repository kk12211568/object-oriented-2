#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    string birth;
    string nation;
};

class Football_Player : public Person
{
public:
    string position;
    string club;
    int back_number;

    Football_Player(string x)
    {
        name = x;
        cout << "축구선수 " << name << "가 생성되었습니다." << endl;
    };
};
int main()
{
    Football_Player SG08("Steven Gerrard");

    SG08.birth = "19800530";
    SG08.nation = "England";
    SG08.position = "Center Midfielder";
    SG08.club = "Liverpool FC";
    SG08.back_number = 8;
}
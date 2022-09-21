#include "Stack.cpp"

int main()
{

    Stack<char> s1(3);
    s1.push('Z');
    s1.push('%');

    cout << "출력: " << s1.pop() << " " << s1.pop() << endl << endl;

    Stack<int> s2(3);
    s2.push(5);
    s2.push(4);
    s2.push(3);

    cout << "출력: " << s2.pop() << " " << s2.pop() << endl;

}

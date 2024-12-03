#include <iostream>
using namespace std;
int main()
{
    int *p;
    cout << p << endl;
    int a =1234;
    cout << a << " " << &a << endl;
    p = &a;
    cout << p << endl;
    cout << &p << endl;
    return 0;
}
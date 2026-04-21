#include<iostream>
using namespace std;

class ABC
{
public:
int a=50;
};
    int main()
    {
    ABC ob1;
    ABC *ptr;
    ptr = &ob1;
    cout << ob1.a;
    cout << ptr->a;
    }

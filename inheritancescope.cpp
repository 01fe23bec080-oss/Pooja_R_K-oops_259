#include<iostream>
using namespace std;

class Base
{
protected:
    int x;

public:
    void setData(int a);
    int getData();
};

class Derived : public Base
{
public:
    void display();
};


void Base::setData(int a)
{
    x = a;
}

int Base::getData()
{
    return x;
}

void Derived::display()
{
    cout << "Value = " << getData() << endl;
}

int main()
{
    Derived d;

    d.setData(22);
    d.display();

    return 0;
}

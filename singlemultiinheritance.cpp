#include <iostream>
using namespace std;

class Base1
{
public:
    void showBase1()
    {
        cout << "Single Inheritance: Base1 class" << endl;
    }
};

class Derived1 : public Base1
{
public:
    void showDerived1()
    {
        cout << "Single Inheritance: Derived1 class" << endl;
    }
};

/* ---------------- MULTIPLE INHERITANCE ---------------- */
class A
{
public:
    void showA()
    {
        cout << "Multiple Inheritance: Class A" << endl;
    }
};

class B
{
public:
    void showB()
    {
        cout << "Multiple Inheritance: Class B" << endl;
    }
};

class C : public A, public B
{
public:
    void showC()
    {
        cout << "Multiple Inheritance: Class C" << endl;
    }
};

/* ---------------- MULTILEVEL INHERITANCE ---------------- */
class X
{
public:
    void showX()
    {
        cout << "Multilevel Inheritance: Class X" << endl;
    }
};

class Y : public X
{
public:
    void showY()
    {
        cout << "Multilevel Inheritance: Class Y" << endl;
    }
};

class Z : public Y
{
public:
    void showZ()
    {
        cout << "Multilevel Inheritance: Class Z" << endl;
    }
};

int main()
{
    cout << "----- Single Inheritance -----" << endl;
    Derived1 d1;
    d1.showBase1();
    d1.showDerived1();

    cout << "\n----- Multiple Inheritance -----" << endl;
    C obj1;
    obj1.showA();
    obj1.showB();
    obj1.showC();

    cout << "\n----- Multilevel Inheritance -----" << endl;
    Z obj2;
    obj2.showX();
    obj2.showY();
    obj2.showZ();

    return 0;
}

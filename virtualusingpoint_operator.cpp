#include<iostream>
using namespace std;

class Base
{
public:
    void show()
    {
        cout << "Base\n";
    }
};

class Der1 : public Base
{
public:
    void show()
    {
        cout << "Der1\n";
    }
};

class Der2 : public Base
{
public:
    void show()
    {
        cout << "Der2\n";
    }
};

int main()
{
    Der1 dv1;
    Der2 dv2;

    // Using dot operator
    dv1.show();   // Calls Der1 version
    dv2.show();   // Calls Der2 version

    return 0;
}

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
Base* ptr;
ptr = &dv1;
ptr -> show();
ptr = &dv2;
ptr -> show();
}

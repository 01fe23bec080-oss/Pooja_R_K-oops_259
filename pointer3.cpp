#include<iostream>
using namespace std;

class Base
{
public:
    void showBase()
    {
        cout << "Base\n";
    }
};
class Der1 : public Base
{
public:
    void showDerived()
    {
        cout << "Der1\n";
    }
};
int main()
{
    Der1 dv1;
    Base* ptr;

    ptr = &dv1;

    ptr->showBase();
    ((Der1*)ptr)->showDerived();

    return 0;
}

#include<iostream>
using namespace std;

class Base
{
protected:
int x;

public:
void setData(int a)
{
x=a;
}
int getData()
{
return x;
}
};
class Derived : public Base
{
public :
     void display()
{

   cout << "Value =  " << getData() << endl;
}
};
int main()
{
    Derived d;

    d.setData(22);
    d.display();

    return 0;
}

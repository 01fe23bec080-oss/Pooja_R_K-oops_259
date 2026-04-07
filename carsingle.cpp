#include<iostream>
using namespace std;
class Car
{
public:
 int speed;
  string brand;

 void display()
 {
 cout<<"Speed:"<<speed<<endl;
 cout<<"Brand"<<brand<<endl;
 }
};

int main()
{
    Car s1;
    s1.speed = 180;
    s1.brand = "Fortuner";

    s1.display();

    Car s2;
    s1.speed = 120;
    s1.brand = "Benz";

    s1.display();
    return 0;
}

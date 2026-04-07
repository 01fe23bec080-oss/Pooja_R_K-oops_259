#include<iostream>
using namespace std;

class Car
{
private:
    string brand;
    int speed;

public:
    void getData()
    {
        cout<<"Enter Car Brand: ";
        cin>>brand;

        cout<<"Enter Speed: ";
        cin>>speed;
    }

    void display()
    {
        cout<<"Brand: "<<brand<<endl;
        cout<<"Speed: "<<speed<<" km/h"<<endl;
    }
};

int main()
{
    Car c1, c2;

    cout<<"Enter details of Car 1"<<endl;
    c1.getData();

    cout<<"\nEnter details of Car 2"<<endl;
    c2.getData();

    cout<<"\nCar 1 Details"<<endl;
    c1.display();

    cout<<"\nCar 2 Details"<<endl;
    c2.display();

    return 0;
}

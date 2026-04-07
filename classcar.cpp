#include<iostream>
using namespace std;

class Car
{
public:
    string brand;
    int speed;

    void display()
    {
        cout << "Car Brand: " << brand << endl;
        cout << "Speed: " << speed << " km/h" << endl;
    }
};

int main()
{
    Car c1, c2;

    cout << "Enter details for Car 1" << endl;
    cout << "Enter Car Brand: ";
    cin >> c1.brand;
    cout << "Enter Speed: ";
    cin >> c1.speed;

    cout << "\nEnter details for Car 2" << endl;
    cout << "Enter Car Brand: ";
    cin >> c2.brand;
    cout << "Enter Speed: ";
    cin >> c2.speed;

    cout << "\nCar 1 Details" << endl;
    c1.display();

    cout << "\nCar 2 Details" << endl;
    c2.display();

    return 0;
}

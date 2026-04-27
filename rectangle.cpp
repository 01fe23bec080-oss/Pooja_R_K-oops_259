#include<iostream>
using namespace std;

int area(int length = 5, int breadth = 4)
{
    return length * breadth;
}

int main()
{
    int l, b, choice;

    cout << "Enter the default values: ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Enter length: ";
        cin >> l;
        cout << "Enter breadth: ";
        cin >> b;

        cout << "Area = " << area(l, b) << endl;
    }
    else
    {
        cout << "Using default values..." << endl;
        cout << "Area = " << area() << endl;
    }

    return 0;
}

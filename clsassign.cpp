#include <iostream>
using namespace std;

int calculateArea(int length = 5, int breadth = 4) {
    return length * breadth;
}

int main() {
    int length, breadth;
    char choice;

    cout << "Do you want to enter values? (y/n): ";
    cin >> choice;

    if (choice == 'y' || choice == 'Y') {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter breadth: ";
        cin >> breadth;

        cout << "Area = " << calculateArea(length, breadth);
    }
    else {
        // Use default values
        cout << "Using default values (length=5, breadth=4)\n";
        cout << "Area = " << calculateArea();
    }

    return 0;
}

#include<iostream>
using namespace std;

int main() {
    int roll, age, marks;
    string name;

    try {
        cout << "Enter Roll Number: ";
        cin >> roll;

        if(roll <= 0)
            throw "Invalid Roll Number";

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Age: ";
        cin >> age;

        if(age <= 0 || age > 120)
            throw "Invalid Age";

        cout << "Enter Marks: ";
        cin >> marks;

        if(marks < 0 || marks > 100)
            throw "Invalid Marks";

        cout << "\nStudent Details:\n";
        cout << "Roll: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;
    }
    catch(const char* msg) {
        cout << "Error: " << msg;
    }

    return 0;
}

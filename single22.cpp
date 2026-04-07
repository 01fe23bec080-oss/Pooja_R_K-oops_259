#include<iostream>
using namespace std;

class Student
{
public:
    int id;
    string name;

    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    Student s1, s2;

    s1.id = 3182;
    s1.name = "Rajeev";

    s2.id = 2846;
    s2.name = "Sanjeev";

    cout << "Student 1 Details" << endl;
    s1.display();

    cout << "\nStudent 2 Details" << endl;
    s2.display();

    return 0;
}

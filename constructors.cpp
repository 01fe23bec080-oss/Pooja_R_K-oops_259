#include <iostream>
using namespace std;
class Student
{
private:
    int id;

public:
    // Default constructor
    Student()
    {
        id = 0;
        cout << "Default Constructor called" << endl;
        cout << "ID = " << id << endl;
    }

    // Parameterized constructor
    Student(int x)
    {
        id = x;
        cout << "Parameterized Constructor called" << endl;
        cout << "ID = " << id << endl;
    }

    // Copy constructor
    Student(Student &s)
    {
        id = s.id;
        cout << "Copy Constructor called" << endl;
        cout << "ID = " << id << endl;
    }
};

int main()
{
    // Object created using default constructor
    Student s1;

    // Object created using parameterized constructor
    Student s2(101);

    // Object created using copy constructor
    Student s3(s2);

    return 0;
}

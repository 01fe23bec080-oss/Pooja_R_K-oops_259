#include <iostream>
using namespace std;

// Base class
class Person {
protected:
    string name;
    string birthday;

public:
    // Constructor
    Person(string n, string b) {
        name = n;
        birthday = b;
    }

    // Print function
    void print() {
        cout << "Name: " << name << endl;
        cout << "Birthday: " << birthday << endl;
    }
};

// Derived class Student
class Student : public Person {
private:
    string major;

public:
    // Constructor
    Student(string n, string b, string m) : Person(n, b) {
        major = m;
    }

    // Print function
    void print() {
        Person::print();
        cout << "Major: " << major << endl;
    }
};

// Derived class Instructor
class Instructor : public Person {
private:
    float salary;

public:
    // Constructor
    Instructor(string n, string b, float s) : Person(n, b) {
        salary = s;
    }

    // Print function
    void print() {
        Person::print();
        cout << "Salary: " << salary << endl;
    }
};

// Main function
int main() {
    Student s("Pooja", "10-05-2003", "Electronics");
    Instructor i("Dr. Rao", "15-08-1980", 75000);

    cout << "Student Details:" << endl;
    s.print();

    cout << "\nInstructor Details:" << endl;
    i.print();

    return 0;
}

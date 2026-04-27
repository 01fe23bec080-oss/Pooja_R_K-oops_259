#include <iostream>
using namespace std;

/* ----------- SINGLE INHERITANCE ----------- */
// Animal -> Dog
class Animal
{
public:
    void eat()
    {
        cout << "Animal eats food" << endl;
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog barks" << endl;
    }
};

/* ----------- MULTIPLE INHERITANCE ----------- */
// Student + Sports -> Result
class Student
{
public:
    void study()
    {
        cout << "Student studies subjects" << endl;
    }
};

class Sports
{
public:
    void play()
    {
        cout << "Student plays sports" << endl;
    }
};

class Result : public Student, public Sports
{
public:
    void display()
    {
        cout << "Result declared" << endl;
    }
};

/* ----------- MULTILEVEL INHERITANCE ----------- */
// Person -> Employee -> Manager
class Person
{
public:
    void showPerson()
    {
        cout << "This is a person" << endl;
    }
};

class Employee : public Person
{
public:
    void showEmployee()
    {
        cout << "This is an employee" << endl;
    }
};

class Manager : public Employee
{
public:
    void showManager()
    {
        cout << "This is a manager" << endl;
    }
};

int main()
{
    cout << "----- Single Inheritance -----" << endl;
    Dog d;
    d.eat();
    d.bark();

    cout << "\n----- Multiple Inheritance -----" << endl;
    Result r;
    r.study();
    r.play();
    r.display();

    cout << "\n----- Multilevel Inheritance -----" << endl;
    Manager m;
    m.showPerson();
    m.showEmployee();
    m.showManager();

    return 0;
}

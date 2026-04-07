#include <iostream>
using namespace std;

/* ----------- SINGLE INHERITANCE ----------- */
// Animal -> Dog
class Animal
{
private:
    string food;

public:
    Animal()
    {
        food = "Bones";
        cout << "Animal constructor called" << endl;
    }

    void showAnimal()
    {
        cout << "Food: " << food << endl;
    }
};

class Dog : public Animal
{
private:
    string breed;

public:
    Dog()
    {
        breed = "Labrador";
        cout << "Dog constructor called" << endl;
    }

    void showDog()
    {
        cout << "Breed: " << breed << endl;
    }
};

/* ----------- MULTIPLE INHERITANCE ----------- */
// Student + Sports -> Result
class Student
{
private:
    int marks;

public:
    Student()
    {
        marks = 85;
        cout << "Student constructor called" << endl;
    }

    void showMarks()
    {
        cout << "Marks: " << marks << endl;
    }
};

class Sports
{
private:
    int score;

public:
    Sports()
    {
        score = 90;
        cout << "Sports constructor called" << endl;
    }

    void showScore()
    {
        cout << "Sports Score: " << score << endl;
    }
};

class Result : public Student, public Sports
{
private:
    string result;

public:
    Result()
    {
        result = "Pass";
        cout << "Result constructor called" << endl;
    }

    void showResult()
    {
        cout << "Result: " << result << endl;
    }
};

/* ----------- MULTILEVEL INHERITANCE ----------- */
// Person -> Employee -> Manager
class Person
{
private:
    string name;

public:
    Person()
    {
        name = "Pooja";
        cout << "Person constructor called" << endl;
    }

    void showPerson()
    {
        cout << "Name: " << name << endl;
    }
};

class Employee : public Person
{
private:
    int empId;

public:
    Employee()
    {
        empId = 101;
        cout << "Employee constructor called" << endl;
    }

    void showEmployee()
    {
        cout << "Employee ID: " << empId << endl;
    }
};

class Manager : public Employee
{
private:
    string department;

public:
    Manager()
    {
        department = "IT";
        cout << "Manager constructor called" << endl;
    }

    void showManager()
    {
        cout << "Department: " << department << endl;
    }
};

int main()
{
    cout << "----- Single Inheritance -----" << endl;
    Dog d;
    d.showAnimal();
    d.showDog();

    cout << "\n----- Multiple Inheritance -----" << endl;
    Result r;
    r.showMarks();
    r.showScore();
    r.showResult();

    cout << "\n----- Multilevel Inheritance -----" << endl;
    Manager m;
    m.showPerson();
    m.showEmployee();
    m.showManager();

    return 0;
}

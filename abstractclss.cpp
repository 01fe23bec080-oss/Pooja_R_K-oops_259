#include<iostream>
using namespace std;

class Shape
{
protected:
    float x;

public:
    void getdata()
    {
        cin >> x;
    }

    virtual float calculateArea() = 0; // Pure virtual function
};

// Correct class name (Shape, not shape)
class Square : public Shape
{
public:
    float calculateArea()
    {
        return x * x;
    }
};

class Circle : public Shape
{
public:
    float calculateArea()
    {
        return 3.1414 * x * x;
    }
};

int main()
{
    Square s;
    Circle c;

    cout << "Enter side of square: ";
    s.getdata();

    cout << "Area of Square: " << s.calculateArea() << endl;

    cout << "Enter radius of circle: ";
    c.getdata();

    cout << "Area of Circle: " << c.calculateArea() << endl;

    return 0;
}

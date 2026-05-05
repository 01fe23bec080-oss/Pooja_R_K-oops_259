#include <iostream>
using namespace std;

class Display
{
public:
    // Function to display integer
    void display(int var)
    {
        cout << "Integer number: " << var << endl;
    }

    // Function to display float
    void display(float var)
    {
        cout << "Float number: " << var << endl;
    }

    // Function to display both integer and float
    void display(int var1, float var2)
    {
        cout << "Integer number: " << var1;
        cout << " and float number: " << var2 << endl;
    }
};

int main()
{
    int a = 5;
    float b = 5.5;

    Display obj;

    obj.display(a);
    obj.display(b);
    obj.display(a, b);

    return 0;
}

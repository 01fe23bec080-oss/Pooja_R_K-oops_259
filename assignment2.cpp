#include <iostream>
using namespace std;

class Student {
private:
    int rollNumber;
    string name;
    float marks;

public:
    // Function to set student details
    void setDetails(int r, string n, float m) {
        rollNumber = r;
        name = n;

        // Validation for marks
        if (m >= 0 && m <= 100) {
            marks = m;
        } else {
            cout << "Invalid marks! Setting marks to 0." << endl;
            marks = 0;
        }
    }

    // Getter functions
    int getRollNumber() {
        return rollNumber;
    }

    string getName() {
        return name;
    }

    float getMarks() {
        return marks;
    }

    // Display function
    void displayDetails() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;

    // Setting details
    s.setDetails(101, "Pooja", 105); // Invalid marks example

    // Displaying details
    s.displayDetails();

    return 0;
}

#include <iostream>
using namespace std;

class Payment {
protected:
    float balance;

public:
    Payment(float b) {
        balance = b;
    }

    void makePayment(float amount, int method) {
        try {
            if (amount <= 0)
                throw 1;   // Error code 1: Invalid amount

            if (amount > balance)
                throw 2;   // Error code 2: Insufficient balance

            if (method != 1 && method != 2)
                throw 3;   // Error code 3: Invalid method

            balance -= amount;
            cout << "Payment Successful!" << endl;
            cout << "Remaining Balance: " << balance << endl;
        }

        catch (int errorCode) {
            if (errorCode == 1)
                cout << "Error: Invalid amount!" << endl;
            else if (errorCode == 2)
                cout << "Error: Insufficient balance!" << endl;
            else if (errorCode == 3)
                cout << "Error: Invalid payment method!" << endl;
        }
    }
};

class UserPayment : public Payment {
public:
    UserPayment(float b) : Payment(b) {}

    void displayMethods() {
        cout << "1. UPI" << endl;
        cout << "2. Card" << endl;
    }
};

int main() {
    float balance = 5000, amount;
    int method;

    UserPayment user(balance);

    user.displayMethods();

    cout << "Enter amount: ";
    cin >> amount;

    cout << "Enter method: ";
    cin >> method;

    user.makePayment(amount, method);

    return 0;
}

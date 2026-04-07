#include <iostream>
using namespace std;

/*
===========================================================
 BASIC CLASS (BankAccount)
===========================================================
*/

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(int accNo, double bal) {
        accountNumber = accNo;
        balance = bal;
    }

    // Public methods
    void deposit(double amount) {
        balance += amount;
    }

    void showBalance() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }

    /*
    ================= NESTED CLASS: TRANSACTION =================
    */
    class Transaction {
    private:
        string type;
        double amount;

    public:
        Transaction(string t, double a) {
            type = t;
            amount = a;
        }

        void showTransaction() {
            cout << "Transaction Type: " << type << endl;
            cout << "Amount: " << amount << endl;
        }
    };

    /*
    ================= NESTED CLASS: CURRENT ACCOUNT (OD) =================
    */
    class CurrentAccount {
    private:
        double overdraftLimit;

    public:
        CurrentAccount(double od) {
            overdraftLimit = od;
        }

        void showOD() {
            cout << "Overdraft Limit: " << overdraftLimit << endl;
        }
    };
};

/*
===========================================================
 DERIVED CLASS (SavingsAccount)
===========================================================
*/

class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    // Constructor with inheritance
    SavingsAccount(int accNo, double bal, double rate)
        : BankAccount(accNo, bal) {
        interestRate = rate;
    }

    void addInterest() {
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }

    /*
    ================= NESTED CLASS: LOAN =================
    */
    class Loan {
    private:
        double loanAmount;

    public:
        Loan(double amt) {
            loanAmount = amt;
        }

        void showLoan() {
            cout << "Loan Amount: " << loanAmount << endl;
        }
    };
};

/*
===========================================================
 MAIN FUNCTION
===========================================================
*/

int main() {

    // Base class object
    BankAccount acc(101, 5000);
    acc.deposit(1000);
    acc.showBalance();

    // Transaction (nested class)
    BankAccount::Transaction t1("Deposit", 1000);
    t1.showTransaction();

    cout << "--------------------------" << endl;

    // Current Account (OD)
    BankAccount::CurrentAccount ca(20000);
    ca.showOD();

    cout << "--------------------------" << endl;

    // Derived class object
    SavingsAccount sacc(202, 10000, 5.5);
    sacc.showBalance();
    sacc.addInterest();

    cout << "--------------------------" << endl;

    // Loan (nested inside derived class)
    SavingsAccount::Loan loan1(50000);
    loan1.showLoan();

    return 0;
}

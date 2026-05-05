#include<iostream>
using namespace std;

int main() {
    int num = 10;
    int den = 0;

    if(den == 0) {
        cout << "Error: Division by zero is not allowed";
    } else {
        cout << "Result: " << num / den;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int balance = 10000, amount;

    cout << "Balance: Rs." << balance << endl;
    cout << "Enter amount: Rs.";
    cin >> amount;

    if (amount <= 0)
        cout << "Invalid Amount!" << endl;
    else if (amount % 100 != 0)
        cout << "Enter multiples of 100 only!" << endl;
    else if (amount > balance)
        cout << "Insufficient Balance!" << endl;
    else {
        balance -= amount;
        cout << "Transaction Successful!" << endl;
        cout << "Remaining Balance: Rs." << balance << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18 && age <= 65) {
        cout << "Congratulations! You are eligible for a discount." << endl;
    } else {
        cout << "Sorry! You are not eligible for a discount." << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0) {
        cout << "negative integers." << endl;
        return 1;
    }

    int factorial = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 1; j++) {
            factorial *= i;
        }
    }

    cout << "Factorial of " << n << " = " << factorial << endl;
    return 0;
}
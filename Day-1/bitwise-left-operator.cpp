#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two integers (a and b): ";
    cin >> a >> b;

    int result = a << 2;  // Multiply a by 4 using left shift

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "a multiplied by 4 (a << 2) = " << result << endl;

    return 0;
}
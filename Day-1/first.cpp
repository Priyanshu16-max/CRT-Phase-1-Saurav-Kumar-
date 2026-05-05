
#include <iostream>
using namespace std;

int main() {
    char op;
    float num1, num2;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            // Note: Division by zero is typically handled here
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;
        default:
            cout << "Error! Invalid operator.";
            break;
    }

    return 0;
}
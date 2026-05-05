#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    
    cout << "Enter first number: ";
    cin >> a;
    
    cout << "Enter second number: ";
    cin >> b;
    
    cout << "Enter third number: ";
    cin >> c;
    
    int sum = a + b + c;
    double average = (double)sum / 3;
    
    cout << "\nNumbers: " << a << ", " << b << ", " << c << endl;
    cout << "Sum     = " << sum << endl;
    cout << "Average = " << average << endl;
    
    return 0;
}
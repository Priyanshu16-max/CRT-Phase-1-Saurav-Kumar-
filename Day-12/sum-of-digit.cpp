#include<iostream>
using namespace std;

int sumOfDigits(int n)
{
    int sum = 0;
    if(n==0) return 0; // If the number is 0, return 0
    return (n % 10) + sumOfDigits(n / 10); // Recursive call to sum the digits
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int result = sumOfDigits(number);
    cout << "The sum of the digits of " << number << " is: " << result << endl;

    return 0;
}
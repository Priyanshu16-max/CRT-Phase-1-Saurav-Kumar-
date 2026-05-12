#include<iostream>
using namespace std;
// fabonacci series using recursion
int fabonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fabonacci(n - 1) + fabonacci(n - 2);
    }
}
int main()
{
    int n;
    cout << "Enter the number of terms in the Fibonacci series: ";
    cin >> n;

    cout << "Fibonacci series: ";
    for (int i = 0; i < n; i++)
    {
        cout << fabonacci(i) << " ";
    }
    cout << endl;

    return 0;
}


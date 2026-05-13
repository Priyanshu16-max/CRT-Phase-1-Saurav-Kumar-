// we have n = 8 , n =1 , n=0 , n =9 calculate that it is occuring in 2 ^n times or not 

#include <iostream>
using namespace std;

bool isPow(int x)
{
    if (x == 0)
        return false;
    if (x == 1)
        return true;
    return (x % 2 == 0) && isPow(x / 2);
}

int main()
{
    int t;
    cin >> t;
    int n;
    while (t--)
    {

        cout << "Enter the number: ";
        cin >> n;
        bool result = isPow(n);

        if (result)
            cout << n << " is a power of 2." << endl;
        else
            cout << n << " is not a power of 2." << endl;
    }
    return 0;
}
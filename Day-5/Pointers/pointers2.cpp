// swap two numbers using pointers
#include<iostream>
using namespace std;

void swap(int *a, int *b){    // function that takes two integer pointers as parameters
    int temp = *a;      // store the value at address a in temp
    *a = *b;            // assign the value at address b to address a
    *b = temp;        // assign the value stored in temp to address b
}

int main(){
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

    swap(&num1, &num2); // pass the addresses of num1 and num2 to the swap function

    cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}
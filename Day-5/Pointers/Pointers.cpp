//pointers :- that stores the address of another variable
#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int* ptr = &a; // ptr is a pointer that stores the address of variable a
    cout << "Value of a: " << a << endl; // Output: 10
    cout << "Address of a: " << &a << endl; // Output: address of a
}
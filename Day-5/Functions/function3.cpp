// wap with default argument and calling it with or without argument
#include<iostream>
using namespace std;
void greet(string name = "Guest"){
    cout << "Hello, " << name << "!" << endl;
}   

int main(){
    greet(); // calling without argument, will use default value "Guest"
    greet("Alice"); // calling with argument, will use "Alice"
    return 0;
}

#include <iostream>
using namespace std;

int globalVar = 100;  // Global integer variable initialized to 100

int main() {
    int userInput;
    
    cout << "Enter an integer: ";
    cin >> userInput;
    
    // Explicit type casting for floating point division
    double result = (double)globalVar / (double)userInput;
    
    cout << "Result of " << globalVar << " / " << userInput << " = " << result << endl;
    
    return 0;
}
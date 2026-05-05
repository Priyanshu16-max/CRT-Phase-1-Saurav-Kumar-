// function without parameter and argument
#include<iostream>
using namespace std;    
void printmsg(){
    cout<<"Hello World!"<<endl;
}

int main(){ 
    printmsg();
    return 0;
}




// example of function with parameter and argument
#include<iostream>      
using namespace std;
// parameter        
void printmsg(string name){
    cout<<"Hello "<<name<<"!"<<endl;
}


// argument
int main(){ 
    printmsg("Alice");
    printmsg("Bob");
    return 0;
}

//example of function with return type
#include<iostream>
using namespace std;
// function with return type
int add(int a, int b){
    return a + b;
}       

int main(){
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int sum = add(num1, num2);
    cout << "The sum is: " << sum << endl;

    return 0;
}

//example of function with return type and no parameter
#include<iostream>
using namespace std;
// function with return type and no parameter
int getRandomNumber(){
    return rand() % 100; // returns a random number between 0 and 99
}


int main(){
    int randomNum = getRandomNumber();
    cout << "Random number: " << randomNum << endl;
    return 0;
}

// example of function with parameter and no return type
#include<iostream>
using namespace std;
// function with parameter and no return type
void printSquare(int num){
    cout << "The square of " << num << " is " << num * num << endl;
}

int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;

    printSquare(number);
    return 0;
}


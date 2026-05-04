// uses nested loop where it takes a positive int n as input and calculate it factorial 
#include <iostream>
using namespace std;    
int main() {
    int n;
    cout<<"Enter the number:";
    cin>>n;
    
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial=factorial*i;
    }
    
    cout<<"Factorial of "<<n<<" is "<<factorial;

    return 0;
}
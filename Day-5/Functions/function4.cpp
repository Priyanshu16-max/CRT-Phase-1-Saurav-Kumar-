//wap that apply 10% discount using reference variable update the original bill amount
#include<iostream>
using namespace std;    
void applyDiscount(double &billAmount){
    billAmount *= 0.9; // applying 10% discount
}
int main(){
    double billAmount;
    cout << "Enter the original bill amount: ";
    cin >> billAmount;

    applyDiscount(billAmount); // passing billAmount by reference

    cout << "Bill amount after discount: " << billAmount << endl; // original billAmount is updated
    return 0;
}

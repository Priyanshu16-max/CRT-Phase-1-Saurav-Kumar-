// wap that takes number of coffee shots returns the tottal coffee vplume in ml. 1 shot = 30ml
#include<iostream>
using namespace std;
int calculateCoffeeVolume(int shots){
    return shots * 30; // 1 shot = 30 ml
}
int main() {
    int shots;      
    cout << "Enter the number of coffee shots: ";
    cin >> shots;   
    int totalVolume = calculateCoffeeVolume(shots);
    cout << "Total coffee volume: " << totalVolume << " ml" << endl;
    return 0;
}

#include<iostream>
using namespace std;
class Cricketers{
    public:
    string name;
    int runs;
    double average;

    // parameterized constructor
    Cricketers(string n, int r, double a){
        name = n;
        runs = r;
        this->average = a;
    }
};

// main function
int main(){
    Cricketers c1("Virat Kohli", 12000, 58.16);
    cout<<"Name: "<<c1.name<<endl;
    cout<<"Runs: "<<c1.runs<<endl;
    cout<<"Average: "<<c1.average<<endl;

    return 0;
}
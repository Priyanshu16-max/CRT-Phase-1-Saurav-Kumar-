// Inheritance :- It is a process of acquiring properties and behaviors from a parent class to a child class.
// single inheritance :- when a child class inherits from a single parent class then it is called single inheritance.
// multiple inheritance :- when a child class inherits from more than one parent class then it is called multiple inheritance.
// multilevel inheritance :- when a child class inherits from a parent class and then another child class inherits from the first child class then it is called multilevel inheritance.
// hierarchical inheritance :- when multiple child classes inherit from a single parent class then it is called hierarchical inheritance.


#include <iostream>
using namespace std;

// Base Class or Parent Class
class Player
{
public:
    string name;
    int age;
    void setName(string n)
    {
        name = n;
    }
};

// Derived Class or Child Class

class Cricketer : public Player
{
public:
    int runs;
    void setruns(int r)
    {
        runs = r;
    }
    void show()
    {
        cout << "Name: " << name << endl;
        cout << "Runs: " << runs << endl;
    }
};

int main()
{
    int r;
    cin >> r;
    Cricketer c1;
    c1.setName("Virat");
    c1.setruns(r);
    c1.show();

    return 0;
}
#include <iostream>
using namespace std;

// Base Class
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

// Derived Class
class Cricketer : public Player
{
public:
    int runs;

    void setruns(int r)
    {
        runs = r;
    }
};

// Derived from Cricketer
class IndianCricketer : public Cricketer
{
public:
    string state;

    void setstate(string s)
    {
        state = s;
    }

    void show()
    {
        cout << "Name: " << name << endl;
        cout << "Runs: " << runs << endl;
        cout << "State: " << state << endl;
    }
};

int main()
{
    int r;
    cin >> r;

    string s;
    cin >> s;

    IndianCricketer c1;

    c1.setName("Virat");
    c1.setruns(r);
    c1.setstate(s);

    c1.show();

    return 0;
}
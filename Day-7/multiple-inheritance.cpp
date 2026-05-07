#include <iostream>
using namespace std;

// First Parent Class
class Player
{
public:
    string name;

    void setName(string n)
    {
        name = n;
    }
};

// Second Parent Class
class Performance
{
public:
    int runs;

    void setruns(int r)
    {
        runs = r;
    }
};

// Child Class inheriting from both classes
class IndianCricketer : public Player, public Performance
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
// create a college management system in that in base class containig name ,age ,details and to derived class student and their data respectively. then also create a virtual function to get what category by default otherwise 


#include <iostream>

using namespace std;
class Player
{
public:
    virtual void show() = 0; // pure virtual function
};

class cricketers : public Player
{

public:
    int a;
    // Implementation needed for  pure virtual function
    void show()
    {
        cout << "Cricketer class show function" << endl;
    }
};

int main()
{
    cricketers c1;
    c1.show();

    return 0;
}
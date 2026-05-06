// class -> keyword :- class name{
// public:/private"/protected:
// data members
// member functions
// };


#include <iostream>
using namespace std;
class Student
{
public:
    // Data members
    string name;
    int rollno;

    // member function
    void display()
    {
        cout << "Name:" << name << endl;
        cout << "Roll No:" << rollno << endl;
    }
};
int main()
{
    Student s1;
    s1.name = "Saurav";
    s1.rollno = 18;
    s1.display();

    return 0;
}
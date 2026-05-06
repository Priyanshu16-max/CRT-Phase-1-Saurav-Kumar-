// class -> keyword :- class name{
// public:/private"/protected:
// data members
// member functions
// };


#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int rollno;
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"rollno: "<<rollno<<endl;
    }
};
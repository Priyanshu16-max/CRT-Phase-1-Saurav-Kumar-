// String  name ="jecrc";
// String class   String name     value of string name is "jecrc"
// Method of String :- length()  , append() , empty() , concate() , push-back() , pop_back() , clear() , compare() , find() , substr() , replace() , swap() , c_str() .
#include <iostream>
#include <string>
using namespace std;




int main()
{
    string str1 = "Hello";
    string str2 = "World";

    // Concatenation of strings
    cout<<str1<<" "<<str2<<endl; // Output: Hello World


    // Length of a string
    cout<<"Length of str1: "<<str1.length()<<endl; // Output: 5
    // Append str2 to str1
    str1.append(str2);
    cout<<"After appending str2 to str1: "<<str1<<endl; // Output: HelloWorld

    // Check if str1 is empty
    cout<<"Is str1 empty? "<<str1.empty()<<endl; // Output: 0 (false)

    //Concatenate str1 and str2 using operator+
    string str3 = str1 + " " + str2;
    cout<<"Concatenated string: "<<str3<<endl; // Output: HelloWorld World
}
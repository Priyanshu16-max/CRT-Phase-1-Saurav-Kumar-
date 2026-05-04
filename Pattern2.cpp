#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter the number of rows and columns:";
    cin>>r>>c;

    for(int r=1;r<=5;c++){
        for(int c=1;c<=r;c++){
            cout<<'*';
        }
        cout<<endl;
    }

    return 0;
}
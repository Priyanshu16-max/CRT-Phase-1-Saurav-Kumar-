#include<iostream>
using namespace std;
int main(){
    int n,c;
    cout<<"Enter the number of rows:";
    cin>>n>>c;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=c;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
#include<iostream>
using namespace std;


class Area{
    private:
    int length;
    int width;

    public:
    void setsides(int l,int w){
        length = l;
        width = w;
    }
    friend void showarea(Area a);
};

void showarea(Area a){
    cout<<"Area: "<<a.length*a.width<<endl;
}

int main(){

    
    Area a;
    a.setsides(5,10);
    showarea(a);
    
    
    
    
    return 0;
}
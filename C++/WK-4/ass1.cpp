#include<iostream>
using namespace std;

class Test1{
    int x;
    public:
    Test1(int _x) : x(_x) { cout <<" Class 1: "; }
    friend void print(int x,int y);                     //LINE-1

};

class Test2{
    int y;
    public:
    Test2(int _y) : y(_y) { cout <<" Class 2: "; }
    friend void print(int x,int y);                    //LINE-2
};

void print(int x, int y){
    if(x==1)
        cout <<" "<< Test1(y).x<<endl;
    else
        cout <<" "<< Test2(y).y<<endl;
}

int main(){
    int a,b;
    cout<<" Enter a : ";
    cin >> a;
    cout<<" Enter b : ";
    cin >> b;
    print(a,b);
    return 0;
}
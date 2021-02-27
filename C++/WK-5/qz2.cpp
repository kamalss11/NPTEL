#include<iostream>
using namespace std;

class B{
    public:
    B(int i){
        cout<<" B::"<<i<<" ";
    }
    ~B(){
        cout<<" ~B";
    }
};

class D:public B{
    public:
    D(int i):B(i){
        cout<<" D::"<<i<<" ";
    }
    ~D(){
        cout<<" ~D";
    }
};

class DD:public D{
    public:
    DD(int i):D(i){
        cout<<" DD::"<<i<<" ";
    }
    ~DD(){
        cout<<" ~DD";
    }
};

DD *dp;
void caller(){
    dp = new DD(1);
}

int main(){
    DD d(2);
    {
        DD d(3);
    }
    caller();
    delete dp;
    return 0;
}
#include<iostream>
using namespace std;

class A{
    int x,y;
};

class B{
    protected:
    int z;
    public:
    void f(){
        cout<<" B::f(); ";
    }
};

class C:public A,public B{
    A obj;
};

int main(){
    cout<<sizeof(C);
    return 0;
}
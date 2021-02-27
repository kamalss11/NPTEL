#include<iostream>
using namespace std;

class B{
    public:
    void f(){
        cout<<" B::f() \n";
    }
};

class D:public B{
    public:
    void f(){
        cout<<" D::f() \n";
    }
};

int main(){
    D obj;
    // obj.f();
    obj.B::f();
    return 0;
}
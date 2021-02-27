#include<iostream>
using namespace std;

class A{
    public: 
    virtual void f(){
        cout<<" A::f()"<<endl;
    }
};

class B: public A{
    public: 
    void f(){
        cout<<" B::f()"<<endl;
    }
};

class C: public B{
    public: 
    void f(){
        cout<<" C::f()"<<endl;
    }
};

int main(){
    C *cb = new C;
    cb->A::f();
}
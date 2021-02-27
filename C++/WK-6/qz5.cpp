#include<iostream>
using namespace std;

class A{
    public: 
    virtual void f(){
        cout<<" A::f()"<<endl;
    }
    void g(){
        cout<<" A::g()"<<endl;
    }
    void h(){
        cout<<" A::h()"<<endl;
    }
};

class B: public A{
    public: 
    void f(){
        cout<<" B::f()"<<endl;
    }
    virtual void g(){
        cout<<" B::g()"<<endl;
    }
    void h(){
        cout<<" B::h()"<<endl;
    }
};

class C: public B{
    public: 
    void f(){
        cout<<" C::f()"<<endl;
    }
    void g(){
        cout<<" C::g()"<<endl;
    }
    virtual void h(){
        cout<<" C::h()"<<endl;
    }
};

int main(){
    C cb;
    B &bb = cb;
    bb.f();
    bb.g();
    bb.h();
    cout<< &cb<<endl<<&bb<<endl;
    return 0;
}
#include<iostream>
using namespace std;

class A{
    public: 
    virtual void f(){
        cout<<" Dynamic -> A::f()"<<endl;
    }
    virtual void g() = 0;
    void h(){
        cout<<" Static - > A::h()"<<endl;
    }
};

class B: public A{
    public: 
    void f(){
        cout<<" Dynamic -> B::f()"<<endl;
    }
    virtual void g(){
        cout<<" Dynamic -> B::g()"<<endl;
    }
    void h(){
        cout<<" Static -> B::h()"<<endl;
    }
};

int main(){
    B ob;
    A *pa = &ob;
    A &ra = ob;

    pa->f();
    pa->g();
    pa->h();

    ra.f();
    ra.g();
    ra.h();
    return 0;
}
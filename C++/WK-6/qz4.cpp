#include<iostream>
using namespace std;

class A{
    public:
    virtual void f() = 0;
};

class B: public A{
    double data1;
    public:
    void f(){
        cout<<" B::f()"<<endl;
    }
};

class C: public B{
    double data2;
    public: 
    void f(){
        cout<<" C::f()"<<endl;
    }
};

int main(){
    cout<<" sizeof(A) : "<<sizeof(A)<<endl;
    cout<<" sizeof(B) : "<<sizeof(B)<<endl;
    cout<<" sizeof(C) : "<<sizeof(C)<<endl;
    return 0;
}
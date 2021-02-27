#include<iostream>
using namespace std;

class A{
    public:
    A(){ cout << "1 "; }
    A(int n){ cout << n * 2 << " "; }

    virtual ~A();   //LINE-1
};

A::~A(){ cout << "2 "; }

class B : public A{
    public:
    B(){ cout << "3 "; }

    B(int n) : A(n){ cout << n * 5 << " "; }    //LINE-2
    virtual ~B(){ cout << "4 "; }
};

int main(){
    int i;
    cin >> i;
    A *pt = new B(i);
    delete pt;
    return 0;
}
#include<iostream>
#include<typeinfo>
using namespace std;

class B{
    public: virtual ~B(){}
};

class D: public B{};

int main(){ 
    B b;D d;
    D *dp = &d;
    B *bp = dp;
    D *dpp = (D*)dp;
    cout<< (typeid(dp).name() == typeid(bp).name());
    cout<< (typeid(*dp).name() == typeid(*bp).name());
    cout<< (typeid(bp).name() == typeid(dpp).name());
    cout<< (typeid(dp).name() == typeid(dpp).name());
    cout<< (typeid(*dp).name() == typeid(*dpp).name());
    return 0;
}
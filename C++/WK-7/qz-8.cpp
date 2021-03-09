#include<iostream>
using namespace std;

class A{
    public:
    virtual ~A(){}
};

class B: public A{};

class C: public A{};

int main(){
    A obja;
    B objb;
    A* pa = dynamic_cast<A*>(&objb);
    pa == NULL ? cout<<" cast-1 invalid:" : cout<<" cast-1 valid:";

    B* pb = dynamic_cast<B*>(pa);
    pb == NULL ? cout<<" cast-2 invalid:" : cout<<" cast-2 valid:";

    C* pc = dynamic_cast<C*>(new A);
    pc == NULL ? cout<<" cast-3 invalid:" : cout<<" cast-3 valid:";
    
    pc = dynamic_cast<C*>(&objb);
    pc == NULL ? cout<<" cast-4 invalid:" : cout<<" cast-4 valid:";
    return 0;
}
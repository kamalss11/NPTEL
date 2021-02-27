#include<iostream>
using namespace std;

class base{
    public: 
    void fun(){
        cout<<" base::fun()"<<endl;
    }
};

class derived: public base{
    public:
    //  using base::fun;
    void fun(){
        cout<<" base::fun()"<<endl;
    }
    void fun(double d){
        cout<<" derived::fun()"<<endl;
    }
};

int main(){
    derived d;
    d.fun();
    d.fun(3.14);
    return 0;
}
#include<iostream>
using namespace std;

class base{
    public : 
    int t1;
};

class derived:protected base{
    public:
    int t2;
    //  int base::t1 = 20;
    int sum(){
        return t1+t2;
    }
};

int main(){
    base b;
    derived d;
    b.t1 = 10;
    d.t1 = 20;
    d.t2 = 30;
    cout<<" "<<d.sum();
    return 0;
}
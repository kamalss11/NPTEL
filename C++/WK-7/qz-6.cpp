#include<iostream>
using namespace std;

class B{
    public:
    base(){
        cout<<" Base : ";
    }
};

class D1: virtual public B{
    public:
    D1(int i){
        cout<<" D1 :";
    }
};

class D2: virtual public B{
    public:
    D2(int i){
        cout<<" D2 : ";
    }
};

class D3: virtual public B{
    public:
    D3(int i){
        cout<<" D3 : ";
    }
};

class DD: public D3,public D2,public D1{
    public:
    DD(int i): D1(i),D2(i),D3(i){ // D(3),D(2),D(1)
        cout<<" DD"<<endl;
    }
};

int main(){
    DD d(10);
    return 0;
}
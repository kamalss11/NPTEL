#include<iostream>
using namespace std;

class B;

class A{
    int num_1;
    public:
    A(int a): num_1(a){}

    friend int add(A,B);
};

class B{
    int num_2;
    public:
    B(int b): num_2(b){}

    friend int add(A,B);
};

int add(A a,B b){
    int res;
    res = a.num_1 + b.num_2;
    return res;
}

int main(){
    cout<<" Friend Function"<<endl;
    cout<<" --> To access private & protected data members of the class."<<endl;
    cout<<" --> No scope resolution is need for call."<<endl;
    A a(25);
    B b(25);
    cout<<" Sum = "<<add(a,b)<<endl;
    return 0;
}
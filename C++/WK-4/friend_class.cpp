#include<iostream>
using namespace std;

class B;

class A{
    string k ="kamalesh";
    public:
    A(){
        cout<<" Constructor of class A"<<endl;
    }

    friend class B;
};

class B{
    A a;
    public:
    B(){
        cout<<" Constructor of class B"<<endl;
    }
    void print(){
        cout<<" "<<a.k<<endl; // Here we are accessing the private data member of class A
    }
};

int main(){
    cout<<" Friend Class"<<endl;
    cout<<" --> 'friend' keyword is used to declare the friend class."<<endl;
    cout<<" --> If we declare the class as friend,member function of that class also friend function.\n"<<endl;
    B b;
    b.print();
    return 0;
}
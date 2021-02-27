#include<iostream>
using namespace std;

class unary{
    int value;
    public:
    unary(int a): value(a){}

    void operator++ (){
        cout<<" Prefix"<<endl;
        ++value;
    }

    void operator++ (int){ 
        // int is not an argument..it's to differentiate prefix & postfix operator overloading
        cout<<" Postfix"<<endl;
        value++;
    }

    void display(){
        cout<<" Value : "<<value<<endl;
    }
};

int main(){
    cout<<" Unary Operator Overloading \n"<<endl;
    unary v(10);
    ++v;
    v.display();
    v++;
    v.display();
    return 0;
}
#include <iostream>
using namespace std;

class c1{
    int x;
    public:
    c1(int c):x(c){}
    ~c1(){
        cout<<x;
    }
    
    void print(){
        cout<<x;
    }
};

class test{
    c1 y,x;
    public:
    test(int a,int b):x(c1(a)),y(c1(b)){}
    void print(){
        x.print();
        y.print();
    }
};

int main() {
    test(1,2).print();
    return 0;
}
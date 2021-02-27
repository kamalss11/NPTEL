#include<iostream>
using namespace std;
int a = 0;
namespace name{
    class myclass{
        int x;
        int a = 5;
        public:
        myclass(int a): x(a){}
        void print(){
            cout<<" x : "<<x<<endl;
        }
    };
}

int main(){
    int a = 10;
    name::myclass m(5);
    m.print();
    cout<<" a : "<<a<<endl;
    return 0;
}
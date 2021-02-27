#include<iostream>
using namespace std;
class myClass{
    int *y,*z,*x;   // data member which is declared 1st is intialized first
    public:
    myClass(int a,int b,int c): x(seta(a)),y(setb(b)),z(setc(c)){}
    int* seta(int a){
        cout<<" "<<a;
        return (new int(a));
    }
    int* setb(int b){
        cout<<" "<<b;
        return (new int(b));
    }
    int* setc(int c){
        cout<<" "<<c;
        return (new int(c));
    }
};

int main(){
    myClass m1(1,2,3);   // or m1 = {1,2,3}
    cout<<endl;
    return 0;
}
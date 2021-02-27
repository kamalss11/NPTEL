#include<iostream>
using namespace std;

int main(){
    /*
    int const  x = 50,y = 100;
    cout<<++x<<" "<<++y;
    int a = 10,b = 20;
    */

    // constant pointer
    /*int a = 20;
    int b = 15;
    int *const p = &a;
    *p = 30;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<a;*/

    //pointer constant
    /*const int *p;
    int a = 20;
    int b = 25;
    p = &a;
    p = &b;
    cout<<*;*/

    int a = 10;
    int &b = a;
    a = a*b;
    cout<<a<<" "<<b;
    return 0;
}
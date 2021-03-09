#include<iostream>
using namespace std;

int main(){
    const int ival = 20;
    const int *pi = &ival;
    int *q = const_cast<int *>(pi);
    *q = 20;
    cout<<*q;
    return 0;
}
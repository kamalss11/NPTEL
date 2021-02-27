#include<iostream>
using namespace std;
/*
int fun(int a){
    return a;
}
int fun(int a,int b=0){
    return a+b;
}

int fun(int a=0,int b=0,int c=0){
    return a+b+c;
}*/

int Area(int a,int b=10){return (a*b);}
double Area(double c, double d){return (c*d);}

int main(){
    /*
    cout<<fun();
    cout<<fun(10,20);
    cout<<fun(10);
    cout<<fun(10,20,30);
    return 0;
    */
   int x=10,y=12;
   double z = 20.5,u=5.0,f;
   f = Area(z,y);
   cout<<"Area"<<" "<<f;
}
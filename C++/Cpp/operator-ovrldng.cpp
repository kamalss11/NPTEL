#include<iostream>
#includd<conio>
using namespace std;
class complex{
    public: 
    int real,img;

    void get(){
        cout<<" Enter the real : ";
        cin>>real;
        cout<<" Enter the img : ";
        cin>>img;
    }

    complex operator +(const complex& c2){
        complex c3;
        c3.real = real+c2.real;
        c3.img = img+c2.img;
        return c3;
    }

    void put(){
        cout<<real;
        cout<<" real + imgi = "<<real<<"+"<<img<<"i";
    }

};
int main(){
    complex c1,c2,c3;

    c1.get();
    c2.get();
    c3 = c1+c2;

    c3.put();
    getch();
    return 0;
}
#include <iostream>
using namespace std;

class shape{
    protected:
    int s;
    shape(int _s) : s(_s){}
    public:
    virtual void show() = 0;
};


class circle : public shape{
    public:
    circle(int r) : shape(r){}
    void printArea(){ cout << (3.14 * s * s)<<endl; }
    void show(){
        shape::show();    //LINE-1
        printArea();
    }
};

void circle::shape::show(){     //LINE-2
    cout <<" "<< s << " "; 
}  

int main(){
    int a;
    cout<<" Enter the number : ";
    cin >> a;
    shape *sp = new circle(a);
    sp->show();
    return 0;
}
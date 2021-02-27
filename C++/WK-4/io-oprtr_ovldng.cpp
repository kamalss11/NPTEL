#include<iostream>
using namespace std;

class complex{
    int re,img;
    public:
    complex(int x,int y): re(x),img(y){}
    friend complex& operator<< (ostream&,complex&);
};

complex& operator<<(ostream& os,complex& c){
    os<<" "<<c.re<<" + "<<c.img<<" i"<<endl;
    return c;
}

int main(){
    complex c(2,5);
    cout << c;
    return 0;
}
#include<iostream>
using namespace std;

class rectangle{
    int w,h;
    public: 
    rectangle(int _w,int _h): w(_w),h(_h){}
    int area(){
        return w*h;
    }
};

class square:public rectangle{
    public:
    square(int _s): rectangle(_s,_s){}
};

int main(){
    square s(5);
    cout<<" "<<s.area()<<"\n";
    return 0;
}
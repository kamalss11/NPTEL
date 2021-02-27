#include<iostream>
using namespace std;

class B{
    protected:
    int t1;
    public: 
    B(int _t1): t1(_t1){}
};

class D: public B{  
//  protected..if we use private here the memebers can be accessed only in class D..
//  it cannot be accessed in class DD
    protected:
    int t2;
    public:
    D(int _t1,int _t2): B(_t1),t2(_t2){}
};

class DD: private D{
    public:
    DD(int _t1,int _t2): D(_t1,_t2){};
    void print(){
        cout<<" "<<t1<<" "<<t2;
    }
};

int main(){
    DD d(10,20);
    d.print();
    return 0;
}
#include<iostream>
#include<math.h>
using namespace std;

class complex{
    double re_,im_;
    public:
    complex(double re,double im):re_(re),im_(im){
        cout<<" Complex Constructor : ";
        print();
        cout<<endl;
    }

    complex(const complex& c):re_(c.re_),im_(c.im_){
        cout<<" Copy Constructor : ";
        print();
        cout<<endl;
    }

    /*complex& operator =(const complex& cc){
        re_ = cc.re_;
        im_ = cc.im_;
        cout<<" Copy Assignment : ";
        print();
        cout<<endl;
        return *this;
    }*/

    double norm(){
        return sqrt(re_*re_ + im_*im_);
    }

    void print(){
        cout<<" | "<<re_<<" + "<<im_<<" |"<<" = "<<norm()<<endl;
    }

    ~complex(){
        cout<<" Destructor"<<endl;
        cout<<" "<<re_<<im_<<endl;
    }
};

int main(){
    complex c1(4.2,2.6),
    c2(c1),
    c3 = c2;
    c1.print();
    c2.print();
    c3.print();
    int x = 10;
    cout<<" Cascading takes place here"<<endl;
    cout<<" "<<++x<<" "<<x++<<" "<<1+x<<endl;
    return 0;
}
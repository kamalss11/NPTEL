#include<iostream>
using namespace std;

class myclass{
    static int x;
    static int count;
    public:
    myclass(int a){
        x = a;
        ++count;
    }
    void print(){
        x = x + 10;
        cout<<" x = "<<x<<endl;
    }

    static int count_(){
        return count;
    }
};

int myclass:: x=0;
int myclass:: count=0;

int main(){
    cout<<" Static data members"<<endl;
    cout<<" --> static data members have to be initialized outside the class using scope resolution"<<endl;
    cout<<"\n Static member functions"<<endl;
    cout<<" --> Use 'static' keyword before the function."<<endl;
    cout<<" --> Object of the class cannot be used for static mmbr func call."<<endl;
    cout<<" --> Static mmbr func called using scope resolution"<<endl;
    myclass m(15),n(15);
    cout<<"\n Object Count : "<<myclass::count_()<<endl;
    m.print();
    cout<<" Object Count : "<<myclass::count_()<<endl;
    n.print();
    return 0;
}
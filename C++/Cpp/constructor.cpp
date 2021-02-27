#include<iostream>
using namespace std;

class Constructor{
    int a,b;

    public: 

    Constructor();
        //cout<<" Working in constructor"<<endl;
    //}
    Constructor(int a,int b);
    //destructor
    ~Constructor();

    void get(){
        cout<<" Enter the value of a : ";
        cin>>a;
        cout<<" Enter the value of b : ";
        cin>>b;
    }

    void print(){
        cout<<" Addition : "<<(a+b)<<endl;
        cout<<" Subtraction : "<<(a-b)<<endl;
        cout<<" Multiplication : "<<(a*b)<<endl;
        cout<<" Division : "<<(a/b)<<endl;
        cout<<" Modulous : "<<(a%b)<<endl;
    }

    void name();
    void divide(double a,double b);
};

Constructor::Constructor(){
    cout<<" Constructor outside the class"<<endl;
}

void Constructor::name(){
    cout<<" Function outside the class"<<endl;
}

void Constructor::divide(double a,double b){
    double temp;
    temp = a;
    a = b;
    b = temp;
    cout<<" a : "<<a<<endl;
    cout<<" b : "<<b<<endl;
}

Constructor::~Constructor(){
    cout<<" Object goes out of scope & object created for the class is destroyed."<<endl;
}

int main(){
    Constructor obj;
    obj.get();
    obj.print();
    obj.name();
    obj.divide(4.5,2.6);
    return 0;
}
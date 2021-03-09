#include<iostream>
using namespace std;

class math{
    protected:
    int _v1, _v2;
    
    public:
    math(int v1, int v2) : _v1(v1), _v2(v2){}
    virtual int calculate() = 0;     //LINE-1
};

class sum : public math{    //LINE-2
    public:
    sum(int v1, int v2) : math(v1, v2){}
    int calculate() { return (_v1 + _v2); }
};

class subtraction : public math{     //LINE-3
    public:
    subtraction(int v1, int v2) : math(v1, v2) {}
    int calculate() { return (_v1 - _v2); }
};

class multiplication : public math{     //LINE-4
   public:
    multiplication(int v1, int v2) : math(v1, v2) {}
    int calculate() { return (_v1 * _v2); }
};

int main(){
    int a, b;
    cout<<" Enter a & b : ";
    cin >> a >> b;
    math* m[3];
    m[0] = dynamic_cast<math*>(new sum(a, b));
    m[1] = dynamic_cast<math*>(new subtraction(a, b));
    m[2] = dynamic_cast<math*>(new multiplication(a, b));
    for(int i = 0; i < 3; i++){
        cout << m[i]->calculate() << " ";
    }
    return 0;
}
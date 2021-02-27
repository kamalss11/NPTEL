#include<iostream>
using namespace std;
class test{
    int x;
    public:
    test(int _x):x(_x){}
    void update(int _x){ 
        x = _x;
    }
    void display(const test& t);
};

void test::display(const test& t){
    cout<<t.x;
}
int main(){
    test t1(1);
    test t2;
    t1.x = 5;
    t1.update(10);
    display(t1);
    return 0;
}

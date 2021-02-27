#include <iostream>
using namespace std;

class test{
    int x;
    static test *instance;
    test(int i): x(i){
        cout<<" Constructor"<<endl;
    }
    public:
    int getval(){
        return x;
    }
    static test* create(int i){
        if(!instance)
            instance = new test(i);
        return instance;
    }
    ~test(){
        cout<<" Destructor"<<endl;
        cout<<x<<endl;
    }
};
test *test::instance = 0;

void fun(){
    test *t= test::create(2);
    cout<<t->getval()<<endl;
}

int main() {
    test *t = test::create(1);
    cout<<" "<<t->getval();
    fun();
    return 0;
}
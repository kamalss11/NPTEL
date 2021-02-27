#include<iostream>
using namespace std;

static int i = 0;
class check{
    public:
    check(){
        cout<<" "<<++i;
    }
    ~check(){
        cout<<" "<<i--;
    }
};

void fun(check c){
}

int main(){
    check c1;
    fun(c1);
    return 0;
}
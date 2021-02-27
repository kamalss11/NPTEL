#include<iostream>
using namespace std;

class myclass{
    int x;
    public:
    myclass(int a) : x(a){
        cout<<"1st";
    }
    myclass(const int &i): x(i){
        cout<<"2nd";
    }
};

int main(){
    myclass m1 = 1;
    return 0;
}
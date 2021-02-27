#include<iostream>
using namespace std;

class myclass{
    int x;
    public:
    myclass(int a): x(a){
        cout<<"1st";
    }
};

int main(){
    myclass obj(1);
    myclass p = obj;
    cout<<endl;
    return 0;
}
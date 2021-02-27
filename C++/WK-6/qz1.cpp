#include<iostream>
using namespace std;

class messenger{
    string msg = "Welcome";
    public: 
    string greet(string name){
        return (msg+name);
    }
};

class spec_messenger: public messenger{
    string msg = "Hello";
};

void print(messenger &ob,string name){
    cout<<" "<<ob.greet(name)<<endl;
}

int main(){
    messenger obj1;
    spec_messenger obj2;
    print(obj1,"Client");
    print(obj2,"Server");
    return 0;
}
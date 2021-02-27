#include<iostream>
using namespace std;

class adder{
    public :
    void add(){
        cout<<" adder::add() ";
    }
};

class int_adder: public adder{
    public :
    int add(int x,int y){
        return (x+y);
    }
    // using adder::add;
};

int main(){
    int_adder ia;
    ia.add();
    cout<<ia.add(5,5)<<endl;
    return  0;
}
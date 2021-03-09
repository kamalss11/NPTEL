#include<iostream>
using namespace std;

class A{

};
class B{

};

int main(){
    A obja;
    B *pb = reinterpret_cast<B*>(&obja);
    return 0;
}
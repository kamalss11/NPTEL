#include <iostream>
using namespace std;

class square{
    int s;
    public:
    square(int _s = 0) : s(_s){}
    virtual int area();         //LINE-1
    void show();         //LINE-2
};

int square::area(){ return s * s; }

void square::show(){ cout <<" "<< area() << " "<<endl; }
		
class cube : public square{
    int s;
    public:
    cube(int _s = 0) : s(_s){}
    int area(){ return 6 * s * s; }
};

int main(){
    int i;
    cout<<" Enter the number : ";
    cin >> i;
    square s(i);
    cube c(i);
    square* r[2] = {&s, &c};
    for(int i = 0; i < 2; i++){
        r[i]->show();
    }	
    return 0;
}
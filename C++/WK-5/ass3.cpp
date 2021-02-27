#include <iostream>
using namespace std;

class Volume{
    int edge;
    public:
    Volume(int _edge) : edge(_edge){}
    int getVal(){ return edge * edge * edge; }
};

class Area{
    int edge;
    public:
    Area(int _edge) : edge(_edge){}
    int getVal(){ return edge * edge; }
};

class Cube : public Volume,public Area{                 //LINE-1
    public:
    Cube(int _edge) : Volume(_edge), Area(_edge){}
    int getVolume(){ return Volume::getVal(); }            //LINE-2
    int getArea(){ return Area::getVal(); }            //LINE-3
};

int main(){
    int a;
    cout<<" Enter a number : ";
    cin >> a;
    Cube c(a);
    cout <<" "<< c.getArea() << ", " <<" "<< c.getVolume()<<"\n";
    return 0;
}
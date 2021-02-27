#include<iostream>
#include<math.h>
using namespace std;
// These are data variables in class which are defined using const keyword. 
// They are not initialized during declaration. Their initialization is done in the constructor.
class Point{
    const int x,y;
    public:
    Point(int _x=0, int _y=0) : x(_x),y(_y) {}               //LINE-1
    Point(const Point& p) : x(p.x),y(p.y){}                 //LINE-2
    double distance(Point p){
        return sqrt(pow((p.x-x),2)+pow((p.y-y),2));       //LINE-3
    }    
    void print()
    { 
        cout << "(" << x << "," << y << ")" << endl;	
    }
};

int main(){
    int x1,x2,y1,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    Point p1(x1,y1), p2(x2,y2);
    p1.print(); 
    p2.print();
    printf("Distance: %.2f", p1.distance(p2));
    return 0;
}
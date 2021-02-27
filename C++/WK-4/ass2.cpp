#include<iostream>
using namespace std;

class positionVector{
    int x, y;
    public:
    positionVector(int a, int b) : x(a), y(b) {}
    positionVector operator +(const positionVector p4){    //LINE-1
        positionVector p(0,0);
        p.x = x + p4.x;                                     //LINE-2
        p.y = y + p4.y;                                     //LINE-3
        return p;
    }
    void print(){ 
        cout << " (" << x << ", " << y << ")"<<endl;	
    }
};

int main(){
    int x1,y1,x2,y2;
    cout<<" Enter x1 : ";
    cin >> x1;
    cout<<" Enter y1 : ";
    cin >> y1;
    cout<<" Enter x2 : ";
    cin >> x2;
    cout<<" Enter y2 : ";
    cin >> y2;
    positionVector p1(x1,y1), p2(x2,y2), p3(0,0);
    p3 = p1+p2;
    p3.print();
    return 0;
}
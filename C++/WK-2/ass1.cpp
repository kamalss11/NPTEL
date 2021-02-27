#include<iostream>
using namespace std;

struct Point{
    int x, y;
};
Point operator ~(struct Point &p){               //LINE-1
    struct Point p1 = {0,0};
    p1.x = p1.x - p.x;                                //LINE-2
    p1.y = p1.y - p.y;                                //LINE-3
    return p1;
}

Point operator +(const Point &p1, const Point &p2){   //LINE-4
    struct Point p3 = {0,0};
    p3.x = p1.x + p2.x;
    p3.y = p1.y + p2.y;
    return p3;
}

int main(){
    struct Point p1, p2, p3;
    cout<<" Enter value of x for p1 : ";
    cin>>p1.x;
    cout<<" Enter value of y for p1 : ";
    cin>>p1.y;
    cout<<" Enter value of x for p2 : ";
    cin>>p2.x;
    cout<<" Enter value of y for p2 : ";
    cin>>p2.y;
    p3 = p2 + ~p1;
    cout <<" "<< p3.x << " " << p3.y<<endl;
    return 0;
}
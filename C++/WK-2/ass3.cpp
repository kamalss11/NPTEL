#include<iostream>
using namespace std;

int square(const int &x){      //LINE-1
    return (x*x);              //LINE-2
}
int main(){
    int x, y, r;
    cout<<" Enter x : ";
    cin >> x;
    cout<<" Enter y : ";
    cin >> y;
    r = 2*square(x+y) + 2*(x+y) - 4;
    cout <<" "<< r<<endl;
    return 0;
} 
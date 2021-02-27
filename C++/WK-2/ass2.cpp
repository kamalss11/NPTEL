#include<iostream>
using namespace std;

int increment(int x,int n=1){      //LINE-1
    return (x+n);
}

int main(){
    int x, n, r;
    cout<<" Enter x : ";
    cin >> x;
    cout<<" Enter n : ";
    cin >> n;
    if(n==0)
        r = increment(x);
    else
        r = increment(x,n);
    cout <<" "<<r<<endl;
    return 0;
}
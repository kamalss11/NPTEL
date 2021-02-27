#include<iostream>
using namespace std;

void caller(char *a,int n);       //LINE-1
void reverse(char *p,int n){      //LINE-2
    char c;
    for(int i=0;i<n/2;i++){
        c = *(p+i);
        *(p+i) = *(p+n-i-1);
        *(p+n-i-1) = c;
    }
}

int main(){
    char *a;
    int n = 5;
    a = new char[n];               //LINE-3
    caller(a,n);
    delete [] a;                    //LINE-4
    return 0;
}
void caller(char *a,int n){       //LINE-5
    cout<<" ";
    for(int i=0;i<n;i++)
        cin >> *(a+i);
    reverse(a,n);
    cout<<" ";
    for(int i=0;i<n;i++)
        cout<< *(a+i);
    cout<<endl;
}
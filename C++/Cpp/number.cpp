#include<iostream>
#include<string.h>
using namespace std;

int n_recur(int n){
    int sum = 0;
    while(n!=0){
        int digit = n % 10;
        sum  =  sum + digit;
        n = n / 10;  
    }
    return sum;
}

int recur(int n,int res){
    if(n!=0){
        int digit = n % 10;
        res = res + digit;
        n = n / 10;
        recur(n,res);
    }
    
    else
        return res;
}

int main(){
    int  n,res=0;
    cout<<" Enter 5 digit number"<<endl<<" ";
    cin>>n;
    cout<<endl<<" Without recursion"<<endl;
    cout<<" "<<n_recur(n)<<endl;
    cout<<endl<<" With recursion"<<endl;
    cout<<" "<<recur(n,res)<<endl;
    return 0;
}
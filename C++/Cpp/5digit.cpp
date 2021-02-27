#include<iostream>
#include<string>
using namespace std;

int n_recur(int arr[],int s){
    int sum = 0; 
    for(int i=0;i<s;i++){
        sum = sum + arr[i];
    }

    return sum;
}

int recur(int arr[],int s,int res){
    s = s-1;
    if(s>=0){
        int sum = res+arr[s];
        recur(arr,s,sum);
    }
    else
        return res;
}

int main(){
    int arr[100],s,res = 0;
    cout<<" Enter the size : ";
    cin>>s;
    cout<<" Enter 5 digits : "<<endl;
    for(int i=0; i<5; i++){
        cout<<" ";
        cin>>arr[i];
    }

    cout<<" Non-recursion"<<endl;
    cout<<" "<<n_recur(arr,s)<<endl;
    cout<<" Recursion"<<endl;
    cout<<" "<<recur(arr,s,res)<<endl;

    return 0;
}


#include <iostream>
using namespace std;
void space(int count,int size){
    int s = (size) - count;
    for(int j=0;j<s-1;j++){
        cout<<" ";
    }
    cout<<"*\n";
}
int main() {
    int i,count,k,n,size;
    cout<<" Enter the size : \n";
    cin>>n;
    size = n;
    for(int j=(n*2)-1;j>0;--j){
        if(j <= (size*2)/2){
            count = 0;
            for(i=j;i<=size-1;i++){
                cout<<" ";
                ++count;
            }
            cout<<"*";
            if(count!=size-1){
                space(count,size-1);
            }
        }
        
        else{
            count = 0;
            for(i=0;i<n-1;i++){
                cout<<" ";
                ++count;
            }
            --n;
            cout<<"*";
            if(count!=size-1){
                space(count,size-1);
            }
            else{
                cout<<"\n";
            }
        }
    }
    return 0;
}

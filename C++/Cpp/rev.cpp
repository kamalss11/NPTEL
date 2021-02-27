#include <iostream>
using namespace std;

int main(){
    int n,ac=0,arr[100],s=0;
    cout<<endl;
    cout<<" Enter the number : ";
    cin>>n;
    int k = n;
    cout<<endl;

    //total no of iteration (n=7 -> n*2-1 -> 13)

    for(int i=0;i<n*2-1;i++){
        
        cout<<" ";

        if(k==1){
            arr[i] = k;
            int as = i;
            ++ac;  
            for(int j=0;j<=ac-1;j++){
                cout<<arr[j]<<" ";
            }  

            for(int j=(ac-2);j>=0;--j){
                cout<<arr[j]<<" ";
            }

            cout<<endl;
            ++s;
            ++k;
        }

        else if(s==0){
            arr[i] = k;
            ++ac;   //count of array storing

            for(int j=0;j<ac;j++){
                cout<<arr[j]<<" ";
            }

            for(int l=0;l<(n*2-1)-ac*2;l++){
                cout<<k<<" ";
            } 

            for(int j=(ac-1);j>=0;--j){
                cout<<arr[j]<<" ";
            }

            cout<<endl;

            --k;
        }

        else{
            --ac;
            arr[ac] =  k;
            
            for(int j=0;j<ac;j++){
                cout<<arr[j]<<" ";
            }
            
            for(int l=0;l<(n*2-1)-ac*2;l++){
                cout<<k<<" ";
            } 

            for(int j=(ac-1);j>=0;--j){
                cout<<arr[j]<<" ";
            }

            ++k;
            cout<<endl;
        }
    }

    cout<<endl;
    
    return 0;
}
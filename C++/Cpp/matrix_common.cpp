/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<iostream>
using namespace std;

class Matrix{
     int s1,s2,arr[100][100],val,count,m=0;
     public : 
     void size(){
          cout<<" Enter two dimensional matrix size : ";
          cin>>s1>>s2; 
     }

     int cm[100];

     void input(){
          cout<<" Enter array \n ";
          for(int i=0;i<s1;i++){
               for(int j=0;j<s2;j++){
                    cin>>arr[i][j];
               }
               cout<<" ";
          }
     }

     void cmn(){
          for(int j=0;j<s2;j++){
               val = arr[0][j];
               check(val);
          }
          
          if(m>0){
               cout<<" Common values in each row : ";
               for(int i=0;i<m;i++){
                    for(int j=i+1;j<m;j++){
                         if(cm[i] == cm[j]){
                              for(int k=i;k<m;k++){
                                   cm[k] = cm[k+1];
                              }
                              --m;
                         }
                    }
               }

               for(int k=0;k<m;k++){
                    cout<<cm[k]<<" ";
                    
               }
          }

          else{
               cout<<"no match \n";
          }
     }

     void check(int v){
          count = 0;
          for(int i=1;i<s1;i++){
               for(int j=0;j<s2;j++){
                    if(v == arr[i][j]){                       
                         ++count; 
                         if(count>=s1-1){
                              cm[m] = v;
                              ++m;
                         }
                    }
               }
          }
     }
};

int main(){
     Matrix m;
     m.size();
     m.input();
     m.cmn();
     return 0;
}
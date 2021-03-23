
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
     }

     void check(int v){
          count = 0;
          for(int i=1;i<s1;i++){
               for(int j=0;j<s2;j++){
                    if(v == arr[i][j]){                       
                         ++count; 
                         if(count>=s1-1){
                              cout<<v<<" ";
                         }
                         else{
                           cout<<" No common values \n";
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

#include<iostream>
#include<conio>
using namespace std;

int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int *const p = arr[0];
    cout<<*(p+1);

    for(int i=0;i<3;i++){
        cout<<*(p+3*i+1)<<" ";
    }

    //cascadding  ----> it comes from right to left
    const int *ar = new int[2]{1,2};
    cout<<*ar<<" "<<*(ar++)<<" "<<*ar+1;x
    getch();
    return 0;
}
#include<iostream>
#include<algorithm>
#include<cctype>
#include<string.h>
using namespace std;
bool compare(char c1, char c2){
return tolower(c1)>tolower(c2); //LINE-1
}
int main(){
char arr1[20], arr2[20];
cout<<" Enter 1st String : ";
cin >> arr1;
cout<<" Enter 2nd String : ";
cin >> arr2;
cout <<" "<< lexicographical_compare(arr1, arr1+strlen(arr1), arr2, arr2+strlen(arr2),compare);

return 0;
}
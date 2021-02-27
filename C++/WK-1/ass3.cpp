#include<iostream>
#include<string.h>
using namespace std;
int compare(char *s1, char *s2, int n){
    return strncmp(s1,s2,n);        //LINE-1
}
int main(){
    char s1[20], s2[20];
    int n,r;
	cout<<" Enter 1st String : ";
    cin >> s1;
	cout<<" Enter 2nd String : ";
	cin >> s2;
	cout<<" Enter no to compare : ";
	cin >> n;
    r = compare(s1,s2,n);
    if(r>0)
        cout <<" "<<s1;
    else if(r<0)
        cout <<" "<<s2;
    else
        cout <<" equal";
    return 0;
}
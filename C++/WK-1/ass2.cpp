#include<iostream>
using namespace std;
void andop(int a, int b){
	cout << (a&b);
}

void orop(int a, int b){
	cout << (a|b);
}

void xorop(int a, int b){
	cout << (a^b);
}

void (*fun_ptr[])(int, int) = {andop,orop,xorop}; //LINE-1

void caller(int ch, int a, int b){
	if(ch<=2)
		fun_ptr[ch](a,b); //LINE-2
}

int main(){
	int ch, a, b;
	cin >> ch >> a >> b;
	caller(ch,a,b);
	return 0;
}
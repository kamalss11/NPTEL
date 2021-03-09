#include<iostream>
#include<cstring>
#include<malloc.h>
using namespace std;

class StringType{
    char* _str;
    public:
    StringType(char* str): _str(str){}    //LINE-1
    operator char*(){                //LINE-2
        char* t_str = (char*)malloc(sizeof(_str) + 7);
        strcpy(t_str, "hello ");
        strcat(t_str, _str);
        return t_str;
    }
};

int main(){
    char s[20];
    cout<<" Enter the string : ";
    cin >> s;
    StringType st = static_cast<StringType>(s);
    cout <<" "<< static_cast<char*>(st)<<endl;
    return 0;
}
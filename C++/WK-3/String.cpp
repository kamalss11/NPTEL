#include<iostream>
#include<string.h>
#include<malloc.h>
using namespace std;

class String{
    public:
    char *str;
    int len;
    String(char *s):str(strdup(s)),len(strlen(s)){}
    String& operator=(const String& s){
        free(str);
        str = strdup(s.str);
        len = s.len;
        return *this;
    }
    ~String(){
        free(str);
    }
    void print(){
        cout<<" "<<str<<" "<<len<<endl;
    }
};

int main() {
    String s1 = "CPP",s2 = "c++";
    s2 = s2;
    s2.print();
    return 0;
}
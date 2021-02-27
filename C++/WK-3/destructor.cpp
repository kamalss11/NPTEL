#include <iostream>
using namespace std;
static int i = 0;
class check{
    int x;
    public:
    check(){
        cout<<" "<<++i;
    }
    ~check(){
        cout<<" "<<i--;
    }
};

void fun(check c){
    
}

int main() {
    cout<<" Destructor takes place here."<<endl;
    check c1;
    fun(c1);
    return 0;
}
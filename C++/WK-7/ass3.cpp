#include<iostream>
using namespace std;
class base {
    public:
    base(int i) { cout << 50 * i << " "; }
    base() { cout << 1 << " "; }
};
class derived1 : virtual base{    //LINE-1
    public:
    derived1(int i);
};
class derived2 : virtual base{     //LINE-2
    public:
    derived2(int i);
};
class derived3 : virtual base{    //LINE-3
    public:
    derived3(int i);
};

class derived_derived: public derived2,public derived1,public derived3 {    //LINE-4
    public:
    derived_derived (int i) : derived1(i), derived2(i), derived3(i) {
        cout << 10 * i << " ";
    }
};

derived1::derived1(int i) : base(i) {
    cout << 40 * i << " ";
}
derived2::derived2(int i) : base(i) {
    cout << 30 * i << " ";
}
derived3::derived3(int i) : base(i) {
    cout << 20 * i << " ";
}

int main() {
    int i = 0;
    cout<<" Enter a no : ";
    cin >> i;
    derived_derived dd(i);
    return 0;
}
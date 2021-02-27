#include<iostream>
using namespace std;

class Student{
    const int id;
    string name;
    mutable int marks;                               //LINE-1

public:
    Student(int a, string b, int c) : id(a), name(b), marks(c) {}

    void updateMarks(int x) const{ marks += x; }     //LINE-2

    void print() const{                            //LINE-3
        cout <<" "<< id << " : " << name << " : " << marks<<endl; 
    }  
};

int main(){
    string n;
    int i, m, u;
    cout<<" Enter Id : ";
    cin>>i;
    cout<<" Enter Name : ";
    cin>>n;
    cout<<" Enter Marks(2) : ";
    cin>>m;
    cout<<" ";cin>>u;
    const Student s1(i, n, m);
    s1.updateMarks(u);
    s1.print();
    return 0;
}
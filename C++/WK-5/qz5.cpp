#include<iostream>
using namespace std;

class Person{
    string name;
    public:
    Person(string _name="unknown"): name(_name){}
    void show1(){
        cout<<" "<<name;
    }
};

//  here class person is inherited with protected access specifier..
//  so,class person's data member & member function becomes protected..
//  protected access specifier can be accessible within the inherited class only....

class Employee:protected Person{
    string deptName;
    public:
    Employee(string _name,string _deptName): Person(_name),deptName(_deptName){}
    void show2(){
        cout<<" "<<deptName;
    }
    //  using Person::show1;
};

int main(){
    Employee d("Avijith","CSE");
    d.show1();
    d.show2();
    return 0;
}
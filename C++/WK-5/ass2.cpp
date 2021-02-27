#include <iostream>
using namespace std;

class Person{
    string name;
    public:
    Person(string _name = "Unknown") : name(_name){}
    void show(){ cout <<" "<< name << ", "; }
};

class Employee : public Person{
    int eid;
    public:
    Employee(){}
    Employee(int _eid, string _name) : Person(_name), eid(_eid){}
    void printEID(){ cout <<" "<< eid << ", "; }
    void show();		
};

class Manager : public Employee{
    string department;
    public:
    Manager(){}
    Manager(int _eid, string _name, string _department) 
    : Employee(_eid,_name),department(_department){}    //LINE-1
        
    void printDepartment(){ cout <<" "<< department<<"\n"; }        
    void show();
};

void Employee::show(){ 
    printEID();
    Person::show();      //LINE-2 
}

void Manager::show(){ 
    Employee::show();      //LINE-3
    printDepartment(); 
}

int main(){
    int a;
    string b, c;
    cout<<" Enter EMPID : ";
    cin >> a;
    cout<<" Enter EMPNAME : ";
    cin >> b;
    cout<<" Enter EMPSTU : ";
    cin>> c;
    Manager m(a, b, c);
    m.show();
    return 0;
}
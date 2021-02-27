#include<iostream>
using namespace std;

class Company{
    string c_name;
    public: 
    Company(string _c_name): c_name(_c_name){}
    string getCName(){
        return c_name;
    }
};

class Employee: private Company{
    string e_name;
    public: 
    Employee(string _c_name="unknown",string _e_name="unknoen"): Company(_c_name),e_name(_e_name){}
    string getEName(){
        //cout<<c_name;
        return e_name;
    }
    string getCName(){
        return Company::getCName();
    }
    // using Company::getCName;
};

int main(){
    Employee e("CMP","Ravi");
    cout<<" "<<e.getCName();
    cout<<" "<<e.getEName()<<"\n";
    return 0;
}
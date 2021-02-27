#include <iostream>
using namespace std;

const double HRA = 14;
const double TA = 65;
class employee{
    protected:
    double salary;
    public:
    employee(double _salary = 0.0) : salary(_salary){}
    double getHRA(){ return salary * HRA / 100; }
    double getTA(){ return salary * TA / 100; }
    virtual double getSalary() = 0;
};

class manager : public employee{
    public:
    manager(double _salary) : employee(_salary){}
    double getSalary();
};

class salesperson : public employee{
    public:
    salesperson(double _salary) : employee(_salary){}
    double getSalary();
};

double manager::getSalary(){
   	return salary+salary*HRA/100;        //LINE-1 
}

double salesperson::getSalary(){
   	return salary+(salary*HRA/100)+(salary*TA/100);        //LINE-2    
}

int main(){
    double d;
    cout<<" Enter the salary : ";
    cin >> d;
    employee *ep[2] = {new manager(d), new salesperson(d)};
    cout <<" "<< ep[0]->getSalary() << " ";
    cout << ep[1]->getSalary()<<endl;
    return 0;
}
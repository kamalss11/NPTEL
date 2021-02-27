#include<iostream>
using namespace std;

class database {
    int data;
    static database *dbObject;            //LINE-1 Complete the declaration
    database(int x) : data(x) {}
    public:
    static database* connect(int x){      //LINE-2 Mention return type of the function
        if(!dbObject)
            dbObject = new database(x);   //LINE-3 Allocate memory to pointer dbObject
        return dbObject;
    }   
        
    void show(){
        cout <<" "<<data;
    }
};

database *database::dbObject = 0;

int main() {
    int x, y;
    database *db1, *db2;
    cout<<" Enter x : ";
    cin >> x;
    cout<<" Enter y : ";
    cin >> y;
    db1 = database::connect(x);
    db2 = database::connect(y);
    db1->show();
    db2->show();
    cout<<" \n";
    return 0;
}
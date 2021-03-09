#include<iostream>
using namespace std;

class books{
    string _author;
    string _publisher;
    string _title;

    public : 
    books(string title,string author,string publisher): _title(title),_author(author),
    _publisher(publisher){}

    void changepublisher(string new_publisher) const{
        //((books* )this)
        (const_cast<books *>(this))->_publisher = new_publisher;
    }
    
    void book_details() const{
        cout<<" "<<_title<<" : "<<" "<<_author <<" : "<<_publisher<<endl;
    }
};

int main(){
    const books b("c++ programming","some author","some publisher");
    b.changepublisher("new publisher");
    b.book_details();
    return 0;
}
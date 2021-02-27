#include <iostream>
using namespace std;

class RAM{
    int size;
    public: 
    RAM(int _size) : size(_size){}
    void getRAMSize(){ cout <<" "<< size << " GB, "; }
};

class HardDisk{
    int size;
    public: 
    HardDisk(int _size) : size(_size){}
    void getHDSize(){ cout <<" "<< size << " GB, "; }
};

class Processor{
    double speed;
    public: 
    Processor(double _speed) : speed(_speed){}
    void getSpeed(){ cout <<" "<< speed << " GHz \n"; }
};


class Computer : private RAM, private HardDisk, private Processor{
    string brand;
    public:
    Computer(string _brand, int _ram_size, int _hd_size, double _speed) 
    : brand(_brand),RAM(_ram_size),HardDisk(_hd_size),Processor(_speed){}       //LINE-1
                               
    void getRAMSize(){ RAM::getRAMSize(); }                         //LINE-2
    void getHDSize(){ HardDisk::getHDSize(); }                         //LINE-3
    void getSpeed(){ Processor::getSpeed(); }                         //LINE-4}; 
    void getBrand(){ cout <<" "<< brand << ", "; }
};// End of class Computer

int main() {
    string s;
    int a, b;
    double c;
    cout<<" Enter Computer Model : ";
    cin >> s;
    cout<<" Enter RAM size : ";
    cin >> a;
    cout<<" Enter Internal space : ";
    cin >> b;
    cout<<" Enter speed : ";
    cin >> c;
    Computer com(s, a, b, c);
    com.getBrand();
    com.getRAMSize();
    com.getHDSize();
    com.getSpeed();
    return 0;
}
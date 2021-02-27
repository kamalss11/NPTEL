#include<iostream>
using namespace std;

class IntArray{
    int *arr;
    int size;
    public:
    IntArray(int n) : arr(new int[n]),size(n){}    //LINE-1

    ~IntArray(){ delete [] arr; }                    //LINE-2
    
    void EnterEle(){
        cout<<" Enter the array elements"<<endl;
        for(int i=0;i<size;i++){
            cout<<" ";
            cin>>arr[i];
        }
    }

    void FindMax(){
        int max = -1;
        for(int i=0;i<size;i++){
            if(max < arr[i])
            max = arr[i];
        }
        cout <<" Max : "<<max<<endl;
    }
};

int main(){
    int n;
    cout<<" Enter array size : ";
    cin>>n;
    IntArray a(n);
    a.EnterEle();
    a.FindMax();
    return 0;
}
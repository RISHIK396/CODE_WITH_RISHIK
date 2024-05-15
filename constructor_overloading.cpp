#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    // constructor overloading 
    // same name se more than one constructor but all have different functionality 
    // compipler recognizes with the help oh numebr of arguments passed
    
    // ##constructor with no arguments##
    complex(void){
        cout<<"constructor with no arguments called "<<endl;
        a=12;
        b=16;
    }
    complex(int n1){
        cout<<"constructor with 2 arguments called "<<endl;
        a=n1;
        b=10;
    }
    complex(int n1,int n2){
        cout<<"constructor with 3 arguments called "<<endl;
        a=n1;
        b=n2;
        cout<<"sucessfully ran"<<endl;
    }

    void getdata(void){
        cout<<"the complex number is: "<<a<<" + "<<b<<"i"<<endl;
    }
};

int main(){
    complex o1;
    complex o2(2);
    complex o3(5,6);
    o1.getdata();
    o2.getdata();
    o3.getdata();
    return 0;
}
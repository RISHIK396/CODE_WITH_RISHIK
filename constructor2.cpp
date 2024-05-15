#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
// constuctor in c++
// default constructor
    complex(){
        a=10;
        b=4;
    }
    complex sum_complex(complex,complex);
    void getdata(void){
        cout<<"the complex number is: "<<a<<"+"<<b<<"i"<<endl;
    }
};

int main(){
    complex o1;
    // constructor will automatically get invoked
    o1.getdata();
    return 0;
}


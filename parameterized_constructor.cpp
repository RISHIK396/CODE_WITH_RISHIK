#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    // parameterized constructor in c++
    // takes argument from the user and sets the value of the private data members
    complex(int n1,int n2){
        a=n1;
        b=n2;
        cout<<"the constructor ran sucessfull"<<endl;
    }
    void getdata(void){
        cout<<"the complex number is: "<<a<<" + "<<b<<"i"<<endl;
    }
};

int main(){
    complex o1(2,4);
    o1.getdata();
}
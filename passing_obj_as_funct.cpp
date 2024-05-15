#include<iostream>
using namespace std;
class complex{
    int a;
    int b;
    public:
    void setdata(int v1,int v2){
        a=v1;
        b=v2;
        cout<<"value set sucessfully "<<endl;
    }
    // in this membership function we are passing class complex object as arguments
    // usually 
    void sumcomplex(complex o1,complex o2){
        a=o1.a+o2.a;
        b=o1.b+o2.b;
        cout<<"the sum of complex is done sucessfully "<<endl;
    }
    void getdata(void){
        cout<<"the number is: "<<a<<"+"<<b<<"i"<<endl;

    }
};

int main(){
    complex o1,o2;
    o1.setdata(2,4);
    o1.getdata();
    o2.setdata(4,6);
    o2.getdata();
    complex o3;
    o3.sumcomplex(o1,o2);
    o3.getdata();
    return 0;
}
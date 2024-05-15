#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex set_number(int n1,int n2){
        a=n1;
        b=n2;
    }

    // this is a function prototype it is not a part of the class 
    // with the help of friend keyword we will allow this function to acess the private members of the class 
    // can be declared inside public or private section of the class 
    friend complex sum_complex(complex,complex);
    void getdata(void);
};
void complex::getdata(void){
    cout<<"the number is "<<a<<" + "<<b<<"i"<<endl;
}
complex sum_complex(complex o1,complex o2){
    complex o3;
    o3.set_number((o1.a+o2.a),(o1.b+o2.b));
    cout<<"the function ran sucessfully"<<endl;
    return o3;
}

int main(){
    complex o1,o2,sum;
    o1.set_number(3,5);
    o1.getdata();
    o2.set_number(6,7);
    o2.getdata();
    sum=sum_complex(o1,o2);
    sum.getdata();
    return 0;
}

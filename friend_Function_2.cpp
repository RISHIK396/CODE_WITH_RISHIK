#include<iostream>
using namespace std;

// forward declaration in c++
// we assuring the complier ki is name se agge class esi zarur ayegi
class complex;
class calculator{
    public:
    int add(int a,int b){
        return a+b;
    }
    int sum_real_complex(complex,complex);
};

class complex{
    int a,b;

    public:
    void set_data(int n1,int n2){
        a=n1;
        b=n2;
        cout<<"private data has ben set sucessfully "<<endl;
    }
    // individually declaring function of another class as friend
    // iss class ke sum_real_complex ko hamare private data ko access karne do
    friend int calculator::sum_real_complex(complex,complex);
    void getdata(void){
        cout<<"the complex number is: "<<a<<"+"<<b<<"i"<<endl;
    }
};

int calculator::sum_real_complex(complex o1,complex o2){
    int sum;
    sum=(o1.a+o2.a);
    cout<<"the sum of the real numbers is: "<<sum<<endl;
}

int main(){
    complex o1,o2;
    calculator sum1;
    o1.set_data(3,4);
    o1.getdata();
    o2.set_data(5,6);
    o2.getdata();
    sum1.sum_real_complex(o1,o2);
    
}
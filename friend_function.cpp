#include<iostream>
using namespace std;
class complex{
    int a;
    int b;
    friend complex sumcomplex(complex,complex);
    public:
        void setnumber(int x,int y){
            a=x;
            b=y;
        }
        void getnumber(){
            cout<<"the complex number is: "<<a<<"+"<<b<<"i"<<endl;

        }

};
complex sumcomplex(complex o1,complex o2){
    cout<<(o1.a+o2.a)<<"+"<<(o1.b+o2.b)<<"i "<<endl<<" is the sum of the two complex numbers "<<endl;
}
int main(){
    complex n1,n2,sum1;
    n1.setnumber(2,4);
    n1.getnumber();
    n2.setnumber(3,6);
    // complex sum1;
    sum1=sumcomplex(n1,n2);
    
}
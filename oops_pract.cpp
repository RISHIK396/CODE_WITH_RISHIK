#include<iostream>
using namespace std;
class Employee{
    private:
        int a,b,c;
    public:
        int d,e;
    void setdata(int a1,int b1,int c1,int d1,int e1);
    void getdata(void){
        cout<<"the value of a is: "<<a;
        cout<<"the value of b and c is: "<<b<<"and"<<c<<endl;
        cout<<"the value of d and e is:"<<d<<"and"<<e<<endl;
    }
};
void Employee::setdata(int a1, int b1,int c1,int d1,int e1){
    a=a1;
    b=b1;
    c=c1;
    d=d1;
    e=e1;
}
int main(){
    Employee harry;
    harry.setdata(1,2,3,4,5);
    // harry.d=10;
    // harry.e=20;
    harry.getdata();
    cout<<"thanks for using the class"<<endl;
}

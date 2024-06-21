#include<iostream>
using namespace std;
class base1{
    int x,y;
    public:
    base1(int a,int b){
        x=a;
        y=b;
        cout<<"base1 constructor called"<<endl;
    }
    void get_data1(){
        cout<<"the value of data1 is: "<<x<<endl;
        cout<<"the value of data2 is: "<<y<<endl;
    }
};
class base2{
    int x1,y1;
    public:
    base2(int a,int b){
        x1=a;
        y1=b;
        cout<<"base2 class constructor called"<<endl;
    }
    void get_data2(){
        cout<<"the value of data1 is: "<<x1<<endl;
        cout<<"the value of data2 is: "<<y1<<endl;
    }
};
class derived: public base1,public base2{
    int x2,y2;
    public:
    derived(int a1,int a2,int b1,int b2,int c1,int c2):base1(b1,b2),base2(c1,c2){
        x2=a1;
        y2=a2;
        cout<<"derived class constructor called "<<endl;
    }
    void print_data(){
        cout<<"the value of data1 is: "<<x2<<endl;
        cout<<"the value of data2 is: "<<y2<<endl;
    }
};
int main(){
    cout<<"we will perform inheritance "<<endl;
    derived harry(1,2,3,4,5,6);
    harry.get_data1();
    harry.get_data2();
    harry.print_data();
}

#include<iostream>
using namespace std;
int count=0;
class number{
    int a;
    public:
    number(){
        a=0;
        cout<<"constructor called: "<<endl;
        ::count++;
    }
    number(int x){
        a=x;
        cout<<"constructor called: "<<endl;
        ::count++;
    }
    number(number &obj){
        a=obj.a;
        cout<<"copy constructor called "<<endl;
        ::count++;
    }
    void display(void){
        cout<<"the value of a is: "<<a<<endl;

    }
    ~number(){
        cout<<"destructor called "<<endl;
        ::count--;
    }
};
int main(){
    number x,y,z(45);
    x.display();
    cout<<::count<<" is the value of count";
    y.display();
    z.display();
    number z1=z;
    z1.display();
    
}
#include<iostream>
using namespace std;
class simple{
    int a,b;
    public:
    // this is a constructor which automatically gets invoked whenever an object
    // is created 
    // one should remember to declare a constructor inside the public section of the class
    simple(){
        a=10;
        b=20;
    }
    void getdata(void){
        cout<<"the value of a is "<<a<<" and b is "<<b<<endl;
    }
};
int main(){
    cout<<"hello world"<<endl;
    simple o1;
    o1.getdata();
    return 0;
}
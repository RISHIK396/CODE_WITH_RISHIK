#include<iostream>
using namespace std;
int main(){
    int a=23;
    // reference variable
    int &b=a;
    cout<<"the value of a is: "<<a<<endl;
    cout<<"the value of b is: "<<b<<endl;
    b=40;
    // by this w get to understand that a and b refer to the same address in the memory 
    // also we can say they are aliases so any one of  value changed other's value will also get changed
    cout<<"value of a now: "<<a<<endl;
    cout<<"the value of b now is: "<<b<<endl;
    return 0; 
}
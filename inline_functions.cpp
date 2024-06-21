#include<iostream>
using namespace std;
inline int multiply(int a,int b){
    int c;
    c=a*b;
    return c;
}
int main(){
    int a,b;
    cout<<"enter the value of a: "<<endl;
    cin>>a;
    cout<<"enter the value of b: "<<endl;
    cin>>b;
    cout<<"the value of a  multiply b is: "<<multiply(a,b)<<endl;
    cout<<"the value of a  multiply b is: "<<multiply(a,b)<<endl;
    cout<<"the value of a  multiply b is: "<<multiply(a,b)<<endl;
}
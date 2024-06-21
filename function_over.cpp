#include<iostream>
using namespace std;
// function overloading
void sum(int a,int b){
    cout<<"printing the sum with two arguments "<<(a+b)<<endl;
}
void sum(int a,int b,int c){
    cout<<"printing the sum with three argumnets "<<(a+b+c)<<endl;
}
int main(){
    int x,y,z;
    cout<<"enter the first number: "<<endl;
    cin>>x;
    cout<<"enter the second number: "<<endl;
    cin>>y;
    cout<<"enter the third number: "<<endl;
    cin>>z;
    sum(x,y);
    sum(x,y,z);
}
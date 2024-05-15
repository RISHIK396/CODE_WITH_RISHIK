#include<iostream>
using namespace std;

// functions in c++

int sum(int a,int b){
    return(a+b);
}
int main(){
    int num1,num2;
    cout<<"enter the first number: "<<endl;
    cin>>num1;
    cout<<"enter the second number: "<<endl;
    cin>>num2;
    cout<<"the sum of 2 numbers is: "<<sum(num1,num2);
    return 0;
}
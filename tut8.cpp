#include<iostream>
using namespace std;

// function prototype
int sum(int,int); //w assuring the complier that this name fuction will come
int product(int a,int b){
    return a*b;
}
int sum(int a1,int a2){
    return a1+a2;
}
int  main(){
    int num1,num2;
    cout<<"enter the first number: "<<endl;
    cin>>num1;
    cout<<"enter the second number: "<<endl;
    cin>>num2;
    cout<<"the sum of two numbers is:"<<sum(num1,num2)<<endl;
    cout<<"the product of the number is: "<<product(num1,num2)<<endl;
    return 0;
}
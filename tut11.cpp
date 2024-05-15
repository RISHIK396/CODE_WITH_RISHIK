#include<iostream>
using namespace std;

// lets see function overloading in c++ 

int sum(int a,int b){
    return a+b;

}
int sum(int a1,int a2,int a3){
    return a1+a2+a3;
}
int main(){
    cout<<"function with 2 arguments: "<<sum(2,3)<<endl;
    cout<<"function with 3 arguments: "<<sum(67,89,90)<<endl;
    // we can clearly see in the first sum function call sum with 2 arguments is called and in the second the function with 3 arguments is called
    // this is called function overloading
}
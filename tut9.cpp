#include<iostream>
using namespace std;

// recurssion in c++
int factorial(int n){
    // base condition
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1);

}
int main(){
    cout<<"enter the number whose factorial is to be found: "<<endl;
    int n;
    cin>>n;
    cout<<"the factorial of the number entered by the user is: "<<factorial(n)<<endl;
    return 0;
}

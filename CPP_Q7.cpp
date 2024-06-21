#include<iostream>
using namespace std;
int main(){
    int num1,num2,z;
    cout<<"enter the first element whose gcd is to be found: "<<endl;
    cin>>num1;
    cout<<"enter the second element whose gcd is to be found: "<<endl;
    cin>>num2;
    if(num1>num2){
         z=num1;
    }
    else{
        z=num2;
    }
    for(int i=z-1;i>0;i--){
        if(num1%i==0 && num2%i==0){
            cout<<"the gcd is: "<<i<<endl;
            break;
        }
    }
    return 0;
}
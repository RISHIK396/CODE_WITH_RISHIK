#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"enter the number which you want to check: "<<endl;
    cin>>number;
    if(number>0){
        cout<<"the number entered by the user is a positive number"<<endl;
    }
    else{
        cout<<"the number entered by the user is a negative number"<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter the number to be checked: "<<endl;
    cin>>num;
    if(num%2==0){
        cout<<"number is an even number "<<endl;
    }
    else{
        cout<<"the number is an odd number "<<endl;
    }

    return 0;
}


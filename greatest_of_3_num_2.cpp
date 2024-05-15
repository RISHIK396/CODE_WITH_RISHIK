#include<iostream>
using namespace std;

int main(){
    int n1,n2,n3;
    cin>>n1;
    cin>>n2;
    cin>>n3;

    // using ternary operators

    int greatest;
    greatest=(n1>n2)&&(n1>n3)?(n2>n3):n3;
    cout<<"the greatest number is: "<<greatest<<endl;
    return 0;
}
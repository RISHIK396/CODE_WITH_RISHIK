#include<iostream>
using namespace std;
int main(){
 
    int n1,n2,n3;
    cout<<"enter the first number: "<<endl;
    cin>>n1;
    cout<<"enter the second number: "<<endl;
    cin>>n2;
    cout<<"enter the third number: "<<endl;
    cin>>n3;
//  checking whether n1 is the greatest 
    if(n1>n2 && n1>n3){
        cout<<"the greatest number is: "<<n1<<endl;
    }
// checking whether n2 is greatest if n1 isn't
    else if(n2>n3){
        cout<<"the greatest number is: "<<n2<<endl;

    }

// if n1 and n2 both are not greatest then it must be n3
    else{
        cout<<"the greatest number is: "<<n3<<endl;
    }
    return 0;
}

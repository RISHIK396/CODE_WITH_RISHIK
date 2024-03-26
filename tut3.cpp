#include<iostream>
using namespace std;
int main(){
float a,b;
float answer;
cout<<"enter the first number: "<<endl;
cin>>a;
cout<<"enter the second number: "<<endl;
cin>>b;
if(a>b){
    answer=(a/b);
    cout<<"the division of "<<a<<" and "<<b<<" is "<<answer;

}
else{
    answer=(b/a);
    cout<<"the answer of "<<a<<" and "<<b<<" is "<<answer;
}
return 0;  

}
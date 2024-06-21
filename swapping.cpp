#include<iostream>
using namespace std;
int swapping (int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    return *a,*b;
}
int main(){
    int x,y;
    cout<<"enter the first number "<<endl;
    cin>>x;
    cout<<"enter the second number "<<endl;
    cin>>y;
    cout<<"the first and second number is"<<x<<"and"<<y<<endl;
    swapping(&x,&y);
    cout<<"the numbers after swapping is: "<<x<<"and"<<y<<endl;


}
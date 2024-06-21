#include<iostream>
using namespace std;
int main(){
    int marks[]={23,45,67,89};
    int math_marks[4];
    math_marks[0]=98;
    math_marks[1]=97;
    math_marks[2]=99;
    math_marks[3]=100;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // cout<<"these are marks of maths "<<endl;
    
    // cout<<math_marks[0]<<endl;
    // cout<<math_marks[1]<<endl;
    // math_marks[2]=94;
    // cout<<math_marks[2]<<endl;
    // cout<<math_marks[3]<<endl;
    // for (int i=0;i<4;i++){
    //     cout<<"the marks "<<i<<" in the marks array is: "<<marks[i]<<endl;
    // }
    // int j=0;
    // while(j<4){
    //     cout<<"the marks of "<<j<<" in the marks array is: "<<marks[j]<<endl;
    //     j++;
    // }
    // int z=0;
    // do
    // {
    //   cout<<"the marks of "<<j<<" in the marks array is: "<<marks[z]<<endl;
    //   z++;
    // }while(z<4);
    int *p=marks;
    cout<<"the address of first block is: "<<*p<<" is "<<p;
    cout<<*(p++);
    cout<<*p;
    
    return 0;
}
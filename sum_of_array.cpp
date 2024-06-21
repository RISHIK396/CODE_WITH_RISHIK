#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the number you want to store in an array to get the sum"<<endl;
    cin>>num;
    int array[num];
    int sum=0;
    int i;
    for(i=0;i<num;i++){
        cout<<"enter the element number: "<<i+1<<"in the array"<<endl;
        cin>>array[i];
    }
    for(i=0;i<num;i++){
        sum+=array[i];
    }
    cout<<"the sum of all the numbers in the array is: "<<sum;
    return 0;
}
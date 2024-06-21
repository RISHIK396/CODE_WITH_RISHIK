#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float sum1=0;
    int n;
    cout<<"enter the value of n: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        if (i%2==0){
            sum1-=1/pow(i,i);
        }
        else{
            sum1+=1/pow(i,i);
        }
        cout<<i<<endl;
    }
     cout<<"the calculated equation is: "<<sum1;
     return 0;
}
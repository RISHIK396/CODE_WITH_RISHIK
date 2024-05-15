#include<iostream>
using namespace std;
int main(){
    int*arr;
    cout<<"enter the number of nodes you want to create: "<<endl;
    int n;
    cin>>n;
    arr=new int[n,n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"enter whether an edge exists in between : "<<i<<" and "<<j<<endl;
            cin>>arr[i,j];
        }
    }
    // printing the adjacency matrix: 
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i,j]<<" ";
        }
        cout<<endl;
    }
}

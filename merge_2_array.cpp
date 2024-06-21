#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter the number of elements to be entered in then array1: "<<endl;
    cin>>n;
    cout<<"enter the number of elements to be entered in the second array: "<<endl;
    cin>>m;
    int array[n],array2[m];
    cout<<"acessing the first array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<"enter the "<<i+1<<" element "<<endl;
        cin>>array[i];

    }
    for(int i=0;i<m;i++){
        cout<<"enter the "<<i+1<<" element "<<endl;
        cin>>array2[i];
    }
    int array3[n+m];
    for(int z=0;z<n;z++){
        array3[z]=array[z];
    }
    for(int j=0;j<m;j++){
        array3[j+n]=array2[j];
    }
    cout<<"arrays merged properly "<<endl;
    for(int k=0;k<n+m;k++){
        cout<<"the element at position "<<k+1<<" is: "<<array3[k]<<endl;
    }
}
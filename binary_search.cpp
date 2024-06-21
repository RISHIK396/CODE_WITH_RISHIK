#include<iostream>
using namespace std;
int binary_search(int array[],int n,int k){
    int s=0;
    int e=n;
    while(s<=e){
        int mid=(s+e)/2;
        if(array[mid]==k){
            return mid;
        }
        else if(array[mid]>k){
            e=mid-1;
        }
        else{
            s=mid+1;
        }

    }
    return -1;
}
int main(){
    int n;
    cout<<"enter the number of elements you want to enter in the array: "<<endl;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cout<<"enter the element at position "<<i<<endl;
        cin>>array[i];

    }
    cout<<"array made sucessfully";
    int k;
    cout<<"enter the element which is to be searched: "<<endl;
    cin>>k;
    cout<<"the element is at position: "<<binary_search(array,n,k)<<endl;
    return 0;
}
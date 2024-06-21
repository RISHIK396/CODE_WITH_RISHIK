// performing binary search in the array
#include<iostream>
using namespace std;
int binary_search(int array[],int n,int k){
    int s=0;
    int e=n;
    while(s<=e){
        int mid=(s+e)/2;    
        if(array[mid]==k)
        {
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
    cout<<"enter the number of elements yo want to enter ;"<<endl;
    cin>>n;
    int arr[n];
    cout<<"please enter the elements in the acending order "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];        
    }
    int k;
    cout<<"enter the array which is to be searched "<<endl;
    cin>>k;
    cout<<"the element searched is at the position "<<binary_search(arr,n,k)<<endl;
}
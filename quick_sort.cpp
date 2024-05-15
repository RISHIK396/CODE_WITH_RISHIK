#include<iostream>
using namespace std;

// finding the index for the partition and placing the pivot at the correct index
int partition(int arr[],int s,int e){
    int pivot=arr[s];

    // creating a pivot and positioning it to right place
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<pivot){
            count++;
        }
    }
    int pivotIndex;
    pivotIndex=count;
    swap(arr[pivotIndex],arr[s]);
    // check whether all elements left of pivot < than it and right waalen > than it
    int i=s,j=e;
    while(i<pivotIndex&&j>pivotIndex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        
    }
    if(i<pivotIndex && j>pivotIndex){
        swap(arr[i],arr[j]);
    }
    return pivotIndex;
}

void quick_sort(int arr[],int s,int e){
    // base case
    if(s>=e){
        return;
    }
    int P=partition(arr,s,e);

    // now recursive function for rigth and left partition 
    quick_sort(arr,s,P-1);

    // right
    quick_sort(arr,P+1,e);
}

int main(){
    int*arr;
    int size;
    cout<<"enter the number of elements to be stored in the array: "<<endl;
    cin>>size;
    arr=new int(size);
    for(int i=0;i<size;i++){
        cout<<"enter the element number: "<<i<<endl;
        cin>>arr[i];
    }
    int s=0;
    int e=size-1;
    quick_sort(arr,s,e);
    return 0;

}
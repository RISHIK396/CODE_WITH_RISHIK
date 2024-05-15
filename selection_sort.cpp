#include<iostream>
using namespace std;
void selection_sort(int arr[6],int n){
    // for the number of rounds
    for(int i=0;i<n-1;i++){
        int minIndex=i;

        // comparing each element with the rest index elements to find the smallest element in the array
        for(int j=i;j<n;j++){
            if(arr[minIndex]>arr[j]);
            minIndex=j;
        }
        swap(arr[minIndex],arr[i]);
    }
}

int main(){
    int arr[6];
    for(int i=0;i<6;i++){
        cout<<"enter the element to be inserted the array: "<<endl;
        cin>>arr[i];
    }

    cout<<"the unsorted array is: "<<arr<<endl;
    // now let us sort the array
    selection_sort(arr,6);
    cout<<"the sorted array is: "<<arr<<endl;
}
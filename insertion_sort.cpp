#include<iostream>
#include<vector>
using namespace std;

void insertion_sort(int n,vector<int>&arr){
    // sorting algo
    // for the number of rounds
    for(int i=1;i<n;i++){
        // to put a particular index element at a correct position
        // considering 0 index already sorted
        int j=i;
        int temp=arr[i];
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
           }
           else{
            break;
           }
        //    putting element at correct position
           arr[j+1]=temp;
        }
    }
}
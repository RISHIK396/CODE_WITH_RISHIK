#include<iostream>
using namespace std;
 void bubble_Sort(int arr[6],int n){
    for(int i=1;i<n;i++){
        bool swap1=false;
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swap1=true;
            }
        }
        if(swap1==false){
            break;
        }
    }
 }
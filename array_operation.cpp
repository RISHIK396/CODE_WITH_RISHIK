#include<iostream>
using namespace std;

class array_operations{
    int capacity=100;
    int size=0;
    int arr[100];
    public:
    // array_operations(int cap){
    //     capacity=cap;
    //     size=0;
    // }

    void insert_elements(void){
        int count;
        cout<<"enter the number of elements inserted at the end of an array: "<<endl;
        cin>>count;
        for(int i=0;i<count;i++){
            cin>>arr[i];
            size++;
        }
        cout<<"elements inserted sucessfully "<<endl;
    }

    void insert_at_position(int element,int index){
        for(int i=size-1;i>=index;i--){
            arr[i+1]=arr[i];
        }
        // out of loop now inseerting the element at our desired position
        arr[index]=element;
        size++;
    }

    void delete_element_pos(int index){
        for(int i=index;i<=size-1;i++){
            // shifting elements one position backwards
            arr[i]=arr[i+1];
        }
        // deleting the element
        size--;
    }
    void display_array(void){
        // displaying array
        cout<<"displaying the array: "<<endl;
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }   
};

int main(){
    // int arr[100];
    // for(int i=0;i<5;i++){
    //     cout<<"enter the element to be inserted at this index: "<<endl;
    //     cin>>arr[i];

    array_operations arr;
    arr.insert_elements();
    arr.display_array();
    arr.insert_at_position(24,2);
    arr.display_array();
    }
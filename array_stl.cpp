#include<iostream>
#include<array>
using namespace std;
int main(){

    // creating an array
    array<int,4>a={1,2,3,4};
    for(int i=0;i<a.size();i++){
    // will tell the element at a particular index at function
        cout<<a.at(i)<<" and "<<a[i]<<endl;
    }
// checks the numbe of elements in the array
    cout<<a.size()<<endl;
    
    // checks whether the array is empty or not
    cout<<a.empty()<<endl;

    // will print the first element of the array
    cout<<a.front()<<endl;

    // will print the last element of the array
    cout<<a.back()<<endl;

    return 0;


}
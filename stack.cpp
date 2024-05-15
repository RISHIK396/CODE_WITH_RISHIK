#include<iostream>
using namespace std;

class stack1{
    public:
    int * arr;
    int top;
    int size;

    stack1(int n){
        top=-1;
        size=n;
        arr=new int[size];
    }
    void push(int element){
        // checking whether the stack is filled or not 
        
        if(size-top>1){
            // means we can insert an element in the stack
            top++;
            arr[top]=element;
        }
        else{
            // stack is full so overloading
            cout<<"the stack is full "<<endl;

        }
    } 
    void pop(){
        if(top==-1){
            cout<<"the stack is empty please enter some elements in the stack"<<endl;
        }
        else{
            // elemets are in the stack we can pop elements in the stack
            top--;
        }
    }
    void peek(){
        if(top==-1){
            cout<<"stack is under flow please enter some elements"<<endl;
        }
        else{
            cout<<arr[top];
        }
    }
    void is_empty(){
        if(top==-1){
            cout<<"the stack is empty "<<endl;

        }
        else{
            cout<<"satck is not empty "<<endl;
        }
    }

};
int main(){
    
}
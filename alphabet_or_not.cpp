#include<cctype>
#include<iostream>
using namespace std;

int main(){
    char char1;
    cout<<"enter the elment to be be checked: "<<endl;
    cin>>char1;
    if(isalpha(char1)){
        cout<<"the element entered by the user is a alphabet"<<endl;
    }
    else{
        cout<<"the element entered by the user is not an alphabet"<<endl;
    }
    return 0;
}
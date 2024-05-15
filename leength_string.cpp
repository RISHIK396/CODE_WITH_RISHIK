#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1;
    int length=0;
    cout<<"enter the string whose length is to be checked: "<<endl;
    cin>>str1;

    // using the end of line character as stopping condition for the loop
    for(int i=0;str1[i]!='\0';i++){
        length++;
    }
    cout<<"the length of the string is: "<<length<<endl;
    return 0;
}
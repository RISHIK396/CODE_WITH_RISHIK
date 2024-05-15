#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1;
    cout<<"enter the string whose chracters are to be toggled: "<<end;
    cin>>str1;
    for(int i=0;i!='\0';i++){
        if(islower(str1[i])){
            str1[i]=toupper(str1[i]);
        }
        else{
            str1[i]=tolower(str1[i]);
        }
    }
    cout<<str1<<endl;
    return 0;
}
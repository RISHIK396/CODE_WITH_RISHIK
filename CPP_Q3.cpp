#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main(){
    string str1;
    cout<<"enter the character whose frequency of each character is to be calculated: "<<endl;
    getline(cin,str1);
    int count;
    for(int i=0;i<str1.length();i++){
        count=0;
        for (int j=0;j<str1.length();j++){
            if(j<i && str1[i]==str1[j]){
                break;
            }
            if(str1[i]==str1[j]){
                count++;
            }
        }
        if(count>0){
        cout<<"the character "<<str1[i]<<" is: "<<count<<endl;
        }
        }
    }
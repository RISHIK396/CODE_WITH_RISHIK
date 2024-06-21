#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main(){
    string str;
    ofstream hout;
    hout.open("sample1.txt");
    ifstream hin;
    hin.open("sample.txt");
    while(hin.eof()==0){
        getline(hin,str);
    }
    cout<<str;
    string str1;
    for(int i=0;i<str.length();i++){
        if(str.at(i)==' '){
            continue;
        }
        else{
            str1+=str.at(i);
        }
    }
    hout<<str1;
    
    return 0;
}
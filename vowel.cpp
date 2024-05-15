#include<cctype>
#include<iostream>
using namespace std;

void check_char(char ch){
    if(isalpha(ch)){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
            cout<<"the character entered entered by the user is a vowel "<<endl;
        }
        else{
            cout<<"the character entered by the user is not a vowel"<<endl;
        }
    }
    else{
        cout<<"the entered element is not a character"<<endl;
    }
}
int main(){
    cout<<"enter the character to be checked: "<<endl;
    char char1;
    cin>>char1;
    check_char(char1);
    cout<<"Thank you for using this function"<<endl;
    return 0;
}
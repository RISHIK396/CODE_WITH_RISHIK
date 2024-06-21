#include <iostream>
#include <string>
#include<cctype>
using namespace std;
void adress_char(string string1)
{
    int array[string1.length()];
    int *p = array;
    for (int i = 0; i < string1.length(); i++)
    {
        array[i] = string1[i];
    }
    cout << "the adress of all the characters in the string is: " << endl;
    for (int j = 0; j < string1.length(); j++)
    {
        cout << (p + j) << endl;
    }
    cout << "all adresess sre printed: " << endl;
}
// // void compare_strings(string str2,string str3){
// //     for(int)
// }
int main()
{
    int choice;
    string str1;
    while (1)
    {
        cout << "1. TO SHOW THE ADRESS OF EACH CHARACTER IN THE STRING" << endl;
        cout << "2.TO CONCATENATE TWO STRINGS" << endl;
        cout << "3.TO COMPARE TWO STRINGS" << endl;
        cout << "4.TO calculate the length of the string" << endl;
        cout << "5.TO CONVERT ALL LOWER CASE CHARACTERS TO UPPER CASE" << endl;
        cout << "6.REVERSE THE STRING" << endl;
        cout << "7.INSERT A STRING IN ANOTHER STRING AT A USER SPECIFIED POSITION" << endl;
        cout << "8.TO EXIT FROM THIS USER DEFINED PROGRAM" << endl;
        cout<<"ENTER YOUR CHOICE: "<<endl;
        cin>>choice;   
        if(choice==1){
            cout<<"enter the string whose adress at different locations is to be found: "<<endl;
            cin>>str1;
            adress_char(str1);
        }
        else if (choice==2)
        {
           string string1;
           string string2;
           cout << "enter the first string: " << endl;
           cin >> string1;
           cout << "enter the second string: " << endl;
           cin >> string2;
           cout << "the concatenated strin is: " << string1 + string2 << endl; 
        }
        else if(choice==3){
            string str2;
            string str3;
            cout<<"enter the first string: "<<endl;
            cin>>str2;
            cout<<"enter the second string: "<<endl;
            cin>>str3;
            if(str2>str3){
                cout<<str2<<"is the string greater"<<endl;
            }
            else{
                cout<<str3<<"is the string greater"<<endl;
            }
        }
        else if(choice==4){

        }
        else if(choice==5){
            cout<<"enter the value of the string whose data is to be found: "<<endl;
            cin>>str1;
            for(int i=0;i<str1.length();i++){
                if (islower(str1.at(i)))
                {
                    str1.at(i)=toupper(str1.at(i));
                }
                else{
                    continue;
                }
            }
            cout<<"the string in upper case is: "<<str1<<endl;
        }
        else if(choice==6){
            string str5;
            cout<<"enter the string which is to be reversed: "<<endl;
            cin>>str5;
            for(int i=str5.length()-1;i>=0;i--){
                cout<<str5.at(i)<<endl;
            }
        }
        else if(choice==7){
            string str6,str7;
            cout<<"enter the first string: "<<endl;
            cin>>str6;
            cout<<"enter the second string: "<<endl;
            cin>>str7;
            string str8;
            int pos;
            cout<<"enter the position at which the string is to be inserted: "<<endl;
            cin>>pos;
            for(int i=0;i<str6.length();i++){
                if(i<=pos){
                    str8+=str6.at(i);
                }
                
                else if(i>pos){
                    str8+=str7;
                }
                else{
                    str8+=str6.at(i>pos);
                }
            }
            cout<<"the new string we got is: "<<str8<<endl;
        }
        else if(choice==8){
            cout<<"THANK YOU FOR USING THE PROGRAM "<<endl;
            break;
        }
        else{
            cout<<"please enter a valid key "<<endl;  
        }
    }
}
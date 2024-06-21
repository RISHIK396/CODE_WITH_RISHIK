#include<iostream>
#include<string>
using namespace std;
class binary{
     string s;
public:
    void read(void);
    void chek_bin(void);
    void ones_complement(void);
    void display(void);
};
void binary::read(void){
    cout<<"enter the binary number to be checked";
    cin>>s;
}
void binary::chek_bin(void){
    for(int i=0;i<=s.length();i++){
        if(s.at(i)!='0'&& s.at(i)!='1'){
            cout<<"wrong binary format";
            exit(0);
        }
        // exit(0);
    }
}
void binary::ones_complement(void){
    for(int i=0;i<=s.length();i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
    }
}
void binary::display(void){
    for(int i=0;i<=s.length();i++){
        cout<<s.at(i);
    }
}
int main(){
    binary b;
    b.read();
    b.chek_bin();
    b.display();
    b.ones_complement();
    b.display();
}
#include<iostream>
#include<string>
using namespace std;
class binary
{
    string s;
public:
    void read_bin(void);
    void bin_chk(void);
    void ones_complement(void);
    void display(void);
};
void binary::read_bin(void){
    cout<<"enter the binary number to be checked: "<<endl;
    cin>>s;
}
void binary::bin_chk(void){
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='0'&& s.at(i)!='1'){
            cout<<"wrong binary format"<<endl;
            exit(0);
        }
    }
}
void binary::ones_complement(void){
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
    }
}
void binary::display(void){
    for(int i=0;i<s.length();i++){
        cout<<s.at(i);

    }
}
int main(){
    binary b;
    b.read_bin();
    b.bin_chk();
    b.ones_complement();
    b.display();
    return 0;
}

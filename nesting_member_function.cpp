#include<iostream>
#include<string>
using namespace std;
class binary{
    string s;
    public:
    void read_bin(void);
    void check_bin(void);
    void ones_complement(void);
    void display(void);
};

void binary::read_bin(void){
    cout<<"enter the binary number: "<<endl;
    cin>>s;
}
void binary::check_bin(void){
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='1'&& s.at(i)!='0'){
            cout<<"incorrect binary format "<<endl;
            exit(0);
        }
    }
}

void binary::ones_complement(void){
    check_bin();
    cout<<"since the format is correct so we will now do the ones complement: "<<endl;
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='1'){
            s[i]='0';
        }
        else{
            s[i]='1';
        }
    }
    cout<<"ones complement done sucessfully "<<endl;
}

void binary::display(void){
    cout<<"the binary numbers are: "<<endl;
    for(int i=0;i<s.length();i++){
        cout<<s[i];
    }

}

int main(){
    binary o1;
    o1.read_bin();
    o1.check_bin();
    o1.ones_complement();
    o1.display();
    return 0;
}
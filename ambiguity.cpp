#include<iostream>
using namespace std;
class base1{
    public:
    void print_data(){
        cout<<"hello world"<<endl;
        cout<<"kaise hai app sabhi log"<<endl;
    }
};
class base2{
    public:
    void print_data(){
        cout<<"aur kaise ho aap"<<endl;
        cout<<"good night"<<endl;
    }
};
class derived:public base1,public base2{
    int a;
    public:
    void print_data(){
        base2:print_data();
    }
};
int main(){
    cout<<"we are performing ambiguity resolution"<<endl;
    derived harry;
    // harry.print_data();
    base1 base1obj;
    base2 base2obj;
    base1obj.print_data();
    base2obj.print_data();
    harry.print_data();
    }
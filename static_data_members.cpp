#include<iostream>
using namespace std;
class Employee{
    int id;
    static int count;
    public:
    void setdata(int a){
       id=a;
       count++;
    }
    void display(void){
        cout<<"the id of the employee is : "<<id<<"with number "<<count<<endl;
    }
};

int main(){
    Employee Harry,Lovish,Rohan;
    Harry.setdata(100);
    Harry.display();
    Lovish.setdata(101);
    Lovish.display();
    Rohan.setdata(103);
    Rohan.display();
    return 0;
}
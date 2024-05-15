#include <iostream>
using namespace std;

class employee{
    int id;
    int salary;
    public:
    void setid(void)
    {
        salary=122;
        cout<<"enter the id of the employee :"<<endl;
        cin>>id;    
    }
    void getid(void){
        cout<<"the id of the employee is: "<<id<<endl;
        cout<<"the salary of the employee is "<<salary<<endl;
    }
};

int main(){
    employee emp[4];
    for (int i=0;i<4;i++){
        emp[i].setid();
        emp[i].getid();
    }
    return 0;
}
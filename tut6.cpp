#include<iostream>
using namespace std;
// creating a structure
struct employee{
    int empid;
    char favchar;
    int salary;
};

// printing a structure
int main(){
    // creating an instance of employee structure
    struct employee Rishik;
    // storing values of employee structure
    Rishik.empid=001;
    Rishik.favchar='R';
    Rishik.salary=1200000000;
    // printing value of the instance Rishik
    cout<<"the employee id of Rishik is: "<<Rishik.empid<<endl;
    cout<<"the favorite character of Rishik is: "<<Rishik.favchar<<" and the salary of Rishik is: "<<Rishik.salary<<endl;
    
}
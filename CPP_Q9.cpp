#include<iostream>
#include<cstring>
using namespace std;
// person class
// person->student
// person->employee
class person{
    public:
    string name;
    void set_data (string name1){
        name=name1;
    }
    virtual void display()=0;
};
class student:public person{
    public:
    string course;
    int marks,year;
    void set_data2(string course1,int marks1,int year1){
        course=course1;
        marks=marks1;
        year=year1;
        cout<<"data entered sucessfully in the student class"<<endl;
    }
    void display(){
        cout<<"the name of the person is: "<<name<<endl;
        cout<<"the course is: "<<course<<endl;
        cout<<"the marks of the student is: "<<marks<<endl;
        cout<<"the year of examination is: "<<year<<endl;
    }
};
class employee:public person{
    public:
    string department;
    int salary;
    void display(){
        cout<<"the name of the person is: "<<name<<endl;
        cout<<"the salary of the person is: "<<salary<<endl;
        cout<<"the department of the person is: "<<department<<endl;
    }
    void set_data1(string department1,int salary1){
        department=department1;
        salary=salary1;
        cout<<"set_data has sucessfully entered the data in the employee class"<<endl;
    }
};
int main(){
    person *base_class_pointer;
    person *base_class_pointer2;
    string name1;
    cout<<"enter the name of the person: "<<endl;
    cin>>name1;
    
    student student1;
    // pointing base_class pointer to the derived class object student1
    base_class_pointer= &student1;
    base_class_pointer->set_data(name1);
    student1.set_data2("computer_science",100,2023);

    // performing runtime polymorphism
    base_class_pointer->display();

    // inputing employee class data

    employee emp1;

    // pointing base class pointer to the derived class object emp1
    base_class_pointer2=& emp1;
    string name2;
    cout<<"enter the name of the employee: "<<endl;
    cin>>name2;

    base_class_pointer2->set_data(name2);
    emp1.set_data1("web_development",1000000);
// runtime polymorphism
    base_class_pointer2->display();

    return 0;    
}
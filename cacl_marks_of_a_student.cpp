#include<iostream>
using namespace std;
class student{
    string name,rollno;
    public:
        int m1,m2,m3;
        double average,percent;
    void setdata(string name1,string rollno1);
    void setmarks(int maths,int english ,int computer_science);
    void getdata(void);
};
void student::setdata(string name1,string rollno1){
    name=name1;
    rollno=rollno1;

}
void student::setmarks(int maths,int english,int computer_science){
    m1=maths;
    m2=english;
    m3=computer_science;
    average=(m1+m2+m3)/3;
    percent=(average*100)/300;

}
void student::getdata(void){
    cout<<"the name of the student with rollno "<<rollno<<" is "<<name<<endl;
    cout<<"the average of marks is of the student is: "<<average;
    cout<<"the percentage of the student is: "<<percent<<"%"<<endl;
}
int main(){
    string name1;
    string rollno1;
    int maths,english,computer_science;
    cout<<"enter the name of the student: "<<endl;
    cin>>name1;
    cout<<"enter the rollno of the student: "<<endl;
    cin>>rollno1;
    cout<<"enter the marks in maths: "<<endl;
    cin>>maths;
    cout<<"enter the marks in english: "<<endl;
    cin>>english;
    cout<<"enter the marks in computer_science: "<<endl;
    cin>>computer_science;
    student rishik;
    rishik.setdata(name1,rollno1);
    rishik.setmarks(maths,english,computer_science);
    rishik.getdata();
    return 0;
}
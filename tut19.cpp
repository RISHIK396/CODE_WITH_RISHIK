#include<iostream>
using namespace std;
int volume(int a){
    //we are finding volume of cuboid
    return a*a*a;

}
int volume(int a,int b,int c){
    //volume of cuboid
    return a*b*c;
}
int main(){
    cout<<"the volume of cube is: "<<volume(7)<<endl;
    cout<<"the volume of cuboid is: "<<volume(2,3,4)<<endl;
    cout<<"this was function overloading: "<<endl;
}
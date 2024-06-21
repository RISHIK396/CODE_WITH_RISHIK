#include<iostream>
#include<unistd.h>
#include<
using namespace std;
int main(){
    int pid;
    pid=fork();
    if(pid <0){
        perror("fork");
        exit(1);  //WILL PRINT ERROR IF THE CURRENT ID IS -1 OR LESS THAN IT
    }
    else if(pid ==0){
        cout<<"printed from child process "<<endl;
        cout<<"my pid is  "<<getpid()<<endl;  //getpid()-> WILL PRINT THE CURRENT PROCESS ID
        exit(0);
    }
    else{
        cout<<"printed from parent process: "<<endl;
        cout<<"actual pid is: "<<getpid()<<endl;
        wait(NULL);
        exit(1);
    }
}
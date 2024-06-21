#include <iostream>
#include<iomanip>
#include<string.h>
using namespace std;
int getlength(char arr[]){
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++){
        count++;
    }
    return count;
}
void count_alpha(char text[]){
    int len = getlength(text);
    int arr[62] = {0};
    int number = 0;
    for (int i = 0; i < len; i++){
        char ch = text[i];
        if (ch >= 'A' || ch <= 'Z'){
            number = ch - 'A';
            arr[number]++;
        }
        else{
            number = ch - 'A';
            arr[number]++;
        }
    }
    cout <<"Total Character = "<< len << endl;
    cout << setw(12) << "Latters" << setw(20) << "Count " << endl;
    for (int i = 0; i < 62; i++){
        int n = arr[i];
        if (n != 0){
            cout << setw(9) << char(i + 'A') << setw(20) << n << endl;
        }
    }
}
int main(int argc,const char** argv)
{   
    char arr[50];
    if(argc<2){
    cout << "Enter your text : ";
    cin.getline(arr,50);
    }
    else{
    strcpy(arr,argv[1]);
    }
    
   
    count_alpha(arr);
    return 0;
}
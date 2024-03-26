#include<iostream>
using namespace std;
// the for loop
/*int main(){
    //  the for loop 
    for(int i=0;i<10;i++){
        // cout<<i<<endl;
        // wron as gets executed first only so continue doesn't work 
        if(i==4){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}
*/
// the while loop
/*int main(){
    int i=0;
    while(i<=10){
        cout<<i<<endl;
        i++;
    }
    return 0;
}
*/

// the do while loop

// through this example we can see though the condition is false then also the loop runs at least 
// so the do while loop always runs at least once
int main(){
    int i=0;
    do
    {
        cout<<i<<endl;
        i++;
    } while (false);
    return 0;
    
}
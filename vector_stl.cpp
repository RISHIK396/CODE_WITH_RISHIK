#include<iostream>
#include<vector>
using namespace std;

// this creates a dym=namic array;
int main(){

vector<int>v1;
cout<<"CAPACITY-> "<<v1.capacity()<<endl;
v1.push_back(1);
cout<<"CAPACITY-> "<<v1.capacity()<<endl;

v1.push_back(2);
cout<<"CAPACITY-> "<<v1.capacity()<<endl;

// whenever array gets filled and more elements to be inserted the array will double its size
v1.push_back(3);
cout<<"CAPACITY-> "<<v1.capacity()<<endl;


return 0;
}
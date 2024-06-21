#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    cout << "enter ther size of the array: " << endl;
    cin >> n;
    int sum1[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter the " << i << " position in an array: " << endl;
        cin >> sum1[i];
    }
    for (int j = 0; j < n; j++)
    {
        cout << "the array entered by the user is" << sum1[j] << endl;
        for (int z = j+1; z < n; z++)
        {
            if (sum1[j] == sum1[z])
            {
                for(int k=j;k<n;k++){
                    sum1[z] = sum1[z + 1];
                }
                n--;
                j--;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << "the array without duplicates is: "<<sum1[i]<< ","<<endl;
        }
        return 0;
    }
}
#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "enter the size of the first array: " << endl;
    cin >> n;
    cout << "enter the size of the second array: " << endl;
    cin >> m;
    int array1[n], array2[m];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the" << i + 1 << "element of the array1" << endl;
        cin >> array1[i];
    }
    cout << "array1 formed sucessfully " << endl;
    for (int j = 0; j < m; j++)
    {
        cout << "enter the" << j + 1 << " element of the array2: " << endl;
        cin >> array2[j];
    }
    int array3[n + m];
    for (int z = 0; z < n; z++)
    {
        array3[z] = array1[z];
        cout << "the array at the " << z + 1 << " position is:" << array3[z] << endl;
    }
    for (int i = 0; i < m; i++)
    {
        array3[n + i] = array2[i];
        cout << "the element at the position " << n + i << " in array is: " << array3[n + i] << endl;
    }
    for (int j = 0; j < n + m; j++)
    {
        cout << "the elment in the merged array at position " << j + 1 << " is " << array3[j] << " , ";
    }
    for (int i = 0; i < n + m; i++)
    {
        for (int j = i+1; j < n + m; j++)
        {
            if (array3[i] > array3[j])
            {
                int temp = array3[i];
                array3[i] = array3[j];
                array3[j] = temp;
            }
        }
    }
    // array after swapping--->>
    for (int j = 0; j < n + m; j++)
    {
        cout << "the elment in the merged array at position " << j + 1 << " is " << array3[j] << " , "<<endl;
    }
}

// 7. Write a C++ program which takes two digits m (row) and n (column)
// as input and generates a two-dimensional array. The element value in the
// i-th row and j-th column of the array should be i*j. Note :
// i = 0,1.., m-1
// j = 0,1, n-1.

// Test Data : Rows = 3, Columns = 4
// Expected Result : [[0, 0, 0, 0], [0, 1, 2, 3], [0, 2, 4, 6]]

#include <iostream>
using namespace std;
int main()
{
    int m,n,i,j;
    cout<<"Enter the number of rows: ";
    cin>>m;
    cout<<"Enter the number of columns: ";
    cin>>n;

    int arr[m][n];
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            arr[i][j]=i*j;
        }
    }
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

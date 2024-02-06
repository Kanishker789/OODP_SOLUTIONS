// 5. Write a C++ program to construct the following pattern, using a nested
// for loop.
// *
// * *
// * * *
// * * * *
// * * * * *
// * * * *
// * * *
// * *
// *

#include <iostream>
using namespace std;
void diamond(int d)
{
    int i, j;
    for (i = 1; i <= d; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (i = d - 1; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    int d;
    cout << "Enter the number of rows: ";
    cin >> d;
    diamond(d);
}

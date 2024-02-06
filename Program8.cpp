// 8. Write a C++ program that accepts a string and calculate the number of
// digits and letters.
// Sample Data : SRMIST 2022

#include <iostream>
using namespace std;

int main()
{
    string str;
    int digits = 0, letters = 0;
    cout << "Enter a string: ";
    getline(cin, str);
    /*Note:- cin considers a space (whitespace, tabs, etc) as a terminating character, which means that it can only store a single word (even if you type many words):
    we often use the getline() function to read a line of text. It takes cin as the first parameter, and the string variable as second:*/

    for (int i = 0; i < str.length(); i++)
    {
        if (isdigit(str[i]))
            digits++;
        else if (isalpha(str[i]))
            letters++;
    }
    cout << "Number of digits: " << digits << endl;
    cout << "Number of letters: " << letters << endl;
    return 0;
}

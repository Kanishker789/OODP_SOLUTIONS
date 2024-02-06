// 9.Write a C++ program to check the validity of password input by users.
// Validation : ● At least 1 letter between [a-z] and 1 letter between [A-Z]. ● At least 1 number between [0-9]. ● At least 1 character from [$#@]. ● Minimum length 6 characters. ● Maximum length 16 characters.
// Sample output
// Input your password srmist@2017
// Not a Valid Password
// Input your password Srmist@2022
// Valid Password
#include <iostream>
#include <string>
using namespace std;

int main()

{
    string password;
    bool hasLower = false, hasUpper = false, hasDigit = false, hasSpecial = false;
    cout << "Enter your password: ";
    cin >> password;
    cout<<password;

    if (islower(password))
    {
        hasLower = true;
    }
    

    if (isupper(password))
    {
        hasUpper = true;
    }

    if (isdigit(password))
    {
        hasDigit = true;
    }
    // All punctuations in C: ! " # $ % & ' ( ) * + , - . / : ; < = > ? @ [ \ ] ^ _ ` { | } ~
    if (ispunct(password))
    {
        hasSpecial = true;
    }

    if (hasLower && hasUpper && hasDigit && hasSpecial && password.length() >= 6 && password.length() <= 16)
    {
        cout << "Valid Password" << endl;
    }
    else
    {
        cout << "Not a Valid Password" << endl;
    }
}

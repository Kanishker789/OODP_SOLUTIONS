// 4."Write a C++ program to guess a number between 1 to 9. Note : User is
// prompted to enter a guess. If the user guesses wrong then the prompt
// appears again until the guess is correct, on successful guess, user will get
// a "Well guessed!" message, and the program will exit.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    int secretNum = rand() % 9 + 1;

    int guess;
    do // do-while ka infinite loop it only breaks when the guess is true
    {
        cout << "Enter your guess (between 1 and 9): ";
        cin >> guess;

        if (guess == secretNum)
        {
            cout << "Well guessed!" << endl;
            break;
        }
        else
        {
            cout << "Wrong guess. Try again." << endl;
        }
    } while (true);

    return 0;
}

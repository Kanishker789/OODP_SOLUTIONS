//Write a C++ program that accepts a word from the user and reverse it.
#include <iostream>
#include <string>

int main() {
    std::string word;
    std::cout << "Enter a word: ";
    std::cin >> word;

    int length = word.length();
    for (int i = length - 1; i >= 0; i--) {
        std::cout << word[i];
    }

    return 0;
}

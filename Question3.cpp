#include <iostream>
#include <string>

std::string reverseString(const std::string& str) {
    std::string reversedStr;
    for (int i = str.length() - 1; i >= 0; --i) {
        reversedStr += str[i];
    }
    return reversedStr;
}

int main() {
    std::string str = "1234abcd";
    std::string reversedStr = reverseString(str);
    std::cout << "Reversed String: " << reversedStr << std::endl;
    return 0;
}

//11. Write a C++ program to convert month name to a number of days.

#include <iostream>
#include <string>

int main() {
    std::string month;
    std::cout << "Enter the month name: ";
    std::cin >> month;

    int days;

    if (month == "January" || month == "March" || month == "May" || month == "July" || month == "August" || month == "October" || month == "December") {
        days = 31;
    } else if (month == "April" || month == "June" || month == "September" || month == "November") {
        days = 30;
    } else if (month == "February") {
        days = 28;
    } else {
        std::cout << "Invalid month name!" << std::endl;
        return 0;
    }

    std::cout << "Number of days " << days << std::endl;

    return 0;
}

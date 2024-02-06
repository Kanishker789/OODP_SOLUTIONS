#include <iostream>
using namespace std;
int main() {
    cout << "Numbers divisible by 8 and multiples of 5 between 1000 and 2000:\n";

    for (int i = 1000; i <= 2000; i++) {
        if (i % 8 == 0 && i % 5 == 0) {
            cout << i << " ";
        }
    }

    cout << std::endl;

    return 0;
}

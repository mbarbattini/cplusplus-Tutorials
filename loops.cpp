#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main () {
    int fact = 5;
    int factorial = fact;
    for (int i = fact - 1; i > 0; i--) {
        factorial *= i;
    }
    cout << "factorial of " << fact << ": " << factorial << endl;
}
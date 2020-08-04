#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// int main () {
//     int fact = 5;
//     int factorial = fact;
//     for (int i = fact - 1; i > 0; i--) {
//         factorial *= i;
//     }
//     cout << "factorial of " << fact << ": " << factorial << endl;
// }

// //while loop for finite loops
// int main() {
//     int i = 0;
//     while(i < 10) {
//         //action
//         i++;
//     }
// }

// while loop to calculate factorial
int main() {
    int factorial = 10;
    int i = factorial - 1;
    while(i > 1) {
        factorial *= i;
        i--;
    }
    cout << factorial << endl;
}
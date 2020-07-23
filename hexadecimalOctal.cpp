#include <iostream>
#include <string>
using std::cout;
using std::endl;

int main() {
    int number = 0x30; //"0x" converts to hexadecimal
    int number2 = 30; //"0" converts to octal
    std::cout << std::hex << number2 << endl; //"std::hex" converts to hexadecimal
    cout << std::oct << number2 << endl; //"std::hex" converts to octal
}
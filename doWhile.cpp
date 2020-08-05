#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main() {
    string password = "123456";
    string guess;
    do { 
        cout << "Guess the password!";
        cin >>  guess;
    } while(guess != password); //condition is after the loop
    cout << "You're in...\n";
}
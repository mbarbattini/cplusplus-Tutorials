#include <iostream>

int main() {
    // enum switch statement
    enum seasons{summer, spring, fall, winter};
    seasons now = winter;
    switch(now) {
        case summer:
            break;
        case spring:
            break;
        case fall:
            break;
        case winter:
            std::cout << "Stay Warm!";
    }






    // // switch statement
    // int age;
    // std::cout << "What is your age?: ";
    // std::cin >> age;
    // switch(age) {
    //     case 13:
    //         std::cout << "Your age is 13";
    //         break;
    //     case 14:
    //         std::cout << "Your age is 14";
    //         break;
    // }


    // // regular conditionals
    // int age_guess;
    // int age_answer = 20;
    // std::string name_answer = "Matthew";
    // std::string name_guess;
    // std::cout << "Guess my age?: ";
    // std::cin >> age_guess;
    // std::cout << "Guess my name?: ";
    // std::cin >> name_guess;
    // if(age_answer == age_guess && name_answer == name_guess) {
    //     std::cout << "You are right!\n";
    // } else {
    //     std::cout << "You are wrong!\n";
    // }
}
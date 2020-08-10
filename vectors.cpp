#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

void print_vector(vector<int> data) {
    for (int i = 0; i < data.size(); i++) {
        cout << data[i] << "\t";
    }
    cout << "\n";
}

// int main() {
//     play_game();
// }
    // vector<int> data  = {1,2,3};

    // // print_vector(data);






//     //creates a final value of 12 no matter the size of the vector
//     data.push_back(12);
//     //removes the last value of the vector
//     data.pop_back();
//     cout << data[2] << endl;

// void print_array(int array[], int count) {
//     for(int i = 0; i < count; i++) {
//         cout << array[i] << "\t";
//     }
//     cout << "\n";
// }

void play_game() {
    vector<int> guesses;

    int random = rand() % 251;
    cout << random << endl;
    cout << "Guess a number: ";
    while (true) {
        int guess;
        cin >> guess;

        guesses.push_back(guess);

        if (guess == random) {
            cout << "You win!\n";
            break;
        } else if (guess < random) {
            cout << "Too low \n";
        } else {
            cout << "Too high \n";
        }
    }  
    print_vector(guesses); 
}

int main() {
    play_game();
}
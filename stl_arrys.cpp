//Templatized Arrays

#include <iostream>
#include <array>

using std::cout;
using std::cin;
using std::endl;
using std::array;

// void Print_array(array<int, 20> data), int size {
//     for (int i = 0; i < size; i++) {
//         cout << data[i] << "\t";
//     }
//     cout << "\n";
// }

// int main() {
//     // Still statically sized
//     array<int, 20> data = {1,2,3};
//     Print_array(data, 3);
// }

void print_array(array<int, 251> array, int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << "\t";
    }
    cout << "\n";
}

void play_game() {
    array<int, 251> guesses;
    int count = 0;

    int random = rand() % 251;
    cout << random << endl;
    cout << "Guess a number: ";
    while (true) {
        int guess;
        cin >> guess;

        guesses[count++] = guess;

        if (guess == random) {
            cout << "You win!\n";
            break;
        } else if (guess < random) {
            cout << "Too low \n";
        } else {
            cout << "Too high \n";
        }
    }  
    print_array(guesses, count); 
}

int main() {
    play_game();
}

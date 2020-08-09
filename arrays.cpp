#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::string;

// int main() {
//     int guesses[] = {3,5,23,5,10}; //array data structure in C++
//     int size = sizeof(guesses) / sizeof(guesses[0]); //must divide by size of one element for correct size
//     //the array is 20 bytes, but there are only 5 elements, so each element is actually 4 bytes
//     for (int i = 0; i < size; i++) {
//         cout << guesses[i] << endl;
//     }
// }

void print_array(int array[], int size) {
    for(int i = 0; i < size; i++) {
        cout << array[i] << "\t"; 
    }
    
}

int main() {
    const int SIZE = 10;
    int count = 0;
    int guesses[SIZE];

    for (int i = 0; i < SIZE; i++) {
        if(cin >> guesses[i]) {
            count++;
        } else {
            break;
        }
    }

    print_array(guesses, count);
}
#include <iostream>
#include <vector>
#include <string>

using std::endl;
using std::cout;
using std::cin;
using std::string;

class User {
    string status = "Gold";

    public:
        string first_name;
        string last_name;
        string get_status() {
            return status;
        }
    User() {
        cout << "Constructor";
    }
    User(string first_name, string last_name) {
        this -> first_name = first_name;
        this -> last_name = last_name;
    }
};

int main() {
    User user("Caleb", "Curry");
    cout << user.first_name << endl;
}
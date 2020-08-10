#include <iostream>

using std::string;

struct User {
    //a method that can access private variables
    string get_status() {
        return status;
    }
    string first_name;
    string last_name;
    private:
        string status = "Gold";
};

int main() {
    //create new object
    User me;
    me.first_name = "Matthew";
    me.last_name = "Barbattini";
    std::cout << "Status: " << me.get_status() << std::endl;;
}
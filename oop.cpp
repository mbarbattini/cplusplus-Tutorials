#include <iostream>
#include <string>
#include <vector>

using std::vector;
using std::string;
using std::endl;
using std::cout;
using std::cin;

//strctures
// struct User {
//     //a method that can access private variables
//     string get_status() {
//         return status;
//     }
//     string first_name;
//     string last_name;
//     private:
//         string status = "Gold";
// };

// int main() {
//     //create new object
//     User me;
//     me.first_name = "Matthew";
//     me.last_name = "Barbattini";
//     std::cout << "Status: " << me.get_status() << std::endl;;
// } 

//classes
class User {
    string status = "Gold";

    public:
        string first_name;
        string last_name;
        string get_status() {
            return status;
        }
};

int add_user_if_not_exits(vector<User> &users, User user) {
    for(int i = 0; i < users.size(); i++) { 
        if(users[i].first_name == user.first_name && 
        users[i].last_name == user.last_name) {
            return i;
        }
    }
    users.push_back(user);
    return users.size() - 1;
}

int main() {
    vector<User> users;

    User user1, user2, user3;
    user1.first_name = "Sally";
    user1.last_name = "Swan";

    user2.first_name = "Jake";
    user2.last_name = "Johnson";

    user3.first_name = "Caleb";
    user3.last_name = "Curry";

    users.push_back(user1);
    users.push_back(user2);
    users.push_back(user3);

    User user;
    user.first_name = "Jacob";
    user.last_name = "Johnson";

    cout << add_user_if_not_exits(users, user) << endl;


    return 0;

}
#include <iostream>
#include <string>

using namespace std;

// Admin panel class
class AdminPanel {
public:
    // Constructor
    AdminPanel(string username, string password) {
        this->username = username;
        this->password = password;
    }

    // Login function
    bool login(string username, string password) {
        if (this->username == username && this->password == password) {
            return true;
        } else {
            return false;
        }
    }

    // Function to ban a user
    void banUser(string username) {
        // Code to ban a user goes here
        cout << "User " << username << " has been banned." << endl;
    }

    // Function to unban a user
    void unbanUser(string username) {
        // Code to unban a user goes here
        cout << "User " << username << " has been unbanned." << endl;
    }

private:
    string username;
    string password;
};

int main() {
    // Create an admin panel object
    AdminPanel adminPanel("admin", "password");

    // Login
    string username, password;
    cout << "Enter your username: ";
    cin >> username;
    cout << "Enter your password: ";
    cin >> password;

    if (adminPanel.login(username, password)) {
        cout << "Login successful." << endl;

        // Ban a user
        string userToBan;
        cout << "Enter the username of the user you want to ban: ";
        cin >> userToBan;
        adminPanel.banUser(userToBan);

        // Unban a user
        string userToUnban;
        cout << "Enter the username of the user you want to unban: ";
        cin >> userToUnban;
        adminPanel.unbanUser(userToUnban);
    } else {
        cout << "Login failed." << endl;
    }

    return 0;
}
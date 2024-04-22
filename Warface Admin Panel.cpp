#include <iostream>
#include <string>

class WarfaceAdminPanel {
private:
    std::string username;
    std::string password;
    bool isAdmin;

public:
    WarfaceAdminPanel() : username(""), password(""), isAdmin(false) {}

    void login() {
        std::cout << "Enter username: ";
        std::cin >> username;
        std::cout << "Enter password: ";
        std::cin >> password;

        if (username == "admin" && password == "password") {
            isAdmin = true;
        } else {
            isAdmin = false;
        }
    }

    void showMenu() {
        if (isAdmin) {
            std::cout << "1. Ban player\n";
            std::cout << "2. Unban player\n";
            std::cout << "3. Kick player\n";
            std::cout << "4. Exit\n";
        } else {
            std::cout << "Invalid login. Please try again.\n";
        }
    }

    void selectOption(int option) {
        if (isAdmin) {
            switch (option) {
                case 1:
                    std::cout << "Enter player name to ban: ";
                    std::cin >> username;
                    // code to ban player
                    break;
                case 2:
                    std::cout << "Enter player name to unban: ";
                    std::cin >> username;
                    // code to unban player
                    break;
                case 3:
                    std::cout << "Enter player name to kick: ";
                    std::cin >> username;
                    // code to kick player
                    break;
                case 4:
                    isAdmin = false;
                    break;
                default:
                    std::cout << "Invalid option. Please try again.\n";
            }
        }
    }
};

int main() {
    WarfaceAdminPanel panel;
    int option;

    while (true) {
        panel.login();
        panel.showMenu();
        std::cout << "Enter option: ";
        std::cin >> option;
        panel.selectOption(option);
    }

    return 0;
}
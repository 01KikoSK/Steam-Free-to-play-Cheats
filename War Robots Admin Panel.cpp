#include <iostream>
#include <string>

// Admin panel options
enum class AdminOption {
    BAN_USER,
    UNBAN_USER,
    ADD_CURRENCY,
    ADD_EXPERIENCE,
    TELEPORT,
    EXIT
};

// Function to display the admin panel
void displayAdminPanel() {
    std::cout << "War Robots Admin Panel" << std::endl;
    std::cout << "1. Ban User" << std::endl;
    std::cout << "2. Unban User" << std::endl;
    std::cout << "3. Add Currency" << std::endl;
    std::cout << "4. Add Experience" << std::endl;
    std::cout << "5. Teleport" << std::endl;
    std::cout << "6. Exit" << std::endl;
}

// Function to handle admin panel selection
void handleAdminSelection(AdminOption selection) {
    switch (selection) {
        case AdminOption::BAN_USER:
            std::cout << "User banned!" << std::endl;
            break;
        case AdminOption::UNBAN_USER:
            std::cout << "User unbanned!" << std::endl;
            break;
        case AdminOption::ADD_CURRENCY:
            std::cout << "Currency added!" << std::endl;
            break;
        case AdminOption::ADD_EXPERIENCE:
            std::cout << "Experience added!" << std::endl;
            break;
        case AdminOption::TELEPORT:
            std::cout << "Teleported to new location!" << std::endl;
            break;
        case AdminOption::EXIT:
            std::cout << "Exiting admin panel..." << std::endl;
            break;
        default:
            std::cout << "Invalid selection. Please try again." << std::endl;
            break;
    }
}

int main() {
    AdminOption selection;

    while (selection!= AdminOption::EXIT) {
        displayAdminPanel();
        std::cout << "Enter the number of your selection: ";
        std::cin >> static_cast<int>(selection);
        handleAdminSelection(selection);
    }

    return 0;
}
#include <iostream>
#include <string>

// Cheat menu options
enum class CheatOption {
    GOD_MODE,
    ADD_CURRENCY,
    ADD_EXPERIENCE,
    TELEPORT,
    EXIT
};

// Function to display the cheat menu
void displayCheatMenu() {
    std::cout << "War Robots Cheat Menu" << std::endl;
    std::cout << "1. God Mode" << std::endl;
    std::cout << "2. Add Currency" << std::endl;
    std::cout << "3. Add Experience" << std::endl;
    std::cout << "4. Teleport" << std::endl;
    std::cout << "5. Exit" << std::endl;
}

// Function to handle cheat menu selection
void handleCheatSelection(CheatOption selection) {
    switch (selection) {
        case CheatOption::GOD_MODE:
            std::cout << "God Mode activated!" << std::endl;
            break;
        case CheatOption::ADD_CURRENCY:
            std::cout << "Currency added!" << std::endl;
            break;
        case CheatOption::ADD_EXPERIENCE:
            std::cout << "Experience added!" << std::endl;
            break;
        case CheatOption::TELEPORT:
            std::cout << "Teleported to new location!" << std::endl;
            break;
        case CheatOption::EXIT:
            std::cout << "Exiting cheat menu..." << std::endl;
            break;
        default:
            std::cout << "Invalid selection. Please try again." << std::endl;
            break;
    }
}

int main() {
    CheatOption selection;

    while (selection!= CheatOption::EXIT) {
        displayCheatMenu();
        std::cout << "Enter the number of your selection: ";
        std::cin >> static_cast<int>(selection);
        handleCheatSelection(selection);
    }

    return 0;
}
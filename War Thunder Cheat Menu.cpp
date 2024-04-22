#include <imgui.h>
#include <imgui-SFML.h>
#include <SFML/Graphics.hpp>

using namespace sf;

// Cheat menu class
class CheatMenu {
public:
    // Constructor
    CheatMenu() {
        // Initialize the window
        window.create(VideoMode(800, 600), "War Thunder Cheat Menu");
        window.setFramerateLimit(60);

        // Initialize ImGui
        ImGui::SFML::Init(window);
    }

    // Render function
    void render() {
        // Start a new ImGui frame
        ImGui::SFML::Update(window, clock.restart());

        // Render the cheat menu
        ImGui::Begin("Cheat Menu");

        // God mode checkbox
        ImGui::Checkbox("God mode", &godMode);
        if (godMode) {
            // Code to enable god mode goes here
            cout << "God mode enabled." << endl;
        } else {
            // Code to disable god mode goes here
            cout << "God mode disabled." << endl;
        }

        // Unlimited ammo checkbox
        ImGui::Checkbox("Unlimited ammo", &unlimitedAmmo);
        if (unlimitedAmmo) {
            // Code to enable unlimited ammo goes here
            cout << "Unlimited ammo enabled." << endl;
        } else {
            // Code to disable unlimited ammo goes here
            cout << "Unlimited ammo disabled." << endl;
        }

        // End the ImGui window
        ImGui::End();

        // Render the ImGui window
        ImGui::SFML::Render(window);
    }

private:
    RenderWindow window;
    Clock clock;
    bool godMode = false;
    bool unlimitedAmmo = false;
};

int main() {
    // Create a cheat menu object
    CheatMenu cheatMenu;

    // Main game loop
    while (window.isOpen()) {
        // Handle events
        Event event;
        while (window.pollEvent(event)) {
            // Close the window if the user clicks the "x" button
            if (event.type == Event::Closed) {
                window.close();
            }

            // Pass the event to ImGui
            ImGui::SFML::ProcessEvent(event);
        }

        // Render the cheat menu
        cheatMenu.render();

        // Display the window
        window.display();
    }

    return 0;
}
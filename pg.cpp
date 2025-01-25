#include <SFML/Graphics.hpp>

int main() {
    // Create a window with 800x600 resolution and a title
    sf::RenderWindow window(sf::VideoMode(800, 600), "Flappy Bird");

    // Set a frame limit (optional)
    window.setFramerateLimit(60);

    // Main game loop
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            // Close the window if the close event is triggered
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Clear the window
        window.clear(sf::Color::Blue);

        // Draw everything here (e.g., shapes, sprites, etc.)

        // Display what was drawn
        window.display();
    }

    return 0;
}

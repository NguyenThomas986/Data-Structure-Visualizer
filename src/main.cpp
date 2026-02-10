#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "Button Test");
    window.setFramerateLimit(60);

    // Load a font
    sf::Font font;
    if (!font.loadFromFile("Arial.ttf")) {
        std::cout << "Failed to load font!\n";
        return -1;
    }

    // Create a button
    Button myButton({200, 60}, {300, 250}, "Click Me", font);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

            // Handle button click
            myButton.handleEvent(event, window);

            if (myButton.isClicked()) {
                std::cout << "Button clicked!\n";
                myButton.resetClick(); // reset for next click
            }
        }

        // Update hover effect
        myButton.update(window);

        window.clear(sf::Color(30,30,40));
        myButton.draw(window);
        window.display();
    }
	return 0;
}

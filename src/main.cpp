#include <SFML/Graphics.hpp>
#include "UI/Menu.hpp"

int main()
{
	sf::RenderWindow window(sf::VideoMode{{200, 200}}, "Button Test");

	sf::Font font("UI/arial.ttf");

    // Create a button
    Button myButton({200, 60}, {300, 250}, "Click Me", font);

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();

            // Handle button click
            // myButton.update(window);

            // if (myButton.isClicked()) {
            //     std::cout << "Button clicked!\n";
            //     myButton.resetClick(); // reset for next click
            // }
        }

        // Update hover effect
        myButton.update(window);

        window.clear(sf::Color(30,30,40));
        myButton.draw(window);
        window.display();
    }
	return 0;
}

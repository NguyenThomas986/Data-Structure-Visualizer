#pragma once
#include <string>
#include <SFML/Graphics.hpp>

class Button {
private:
    sf::RectangleShape shape;
    sf::Text label;
    sf::Font& font;

    bool hovered = false;
    bool clicked = false;

    // Colors
    sf::Color normalColor = sf::Color(100, 100, 100);
    sf::Color hoverColor = sf::Color(150, 150, 150);
    sf::Color clickColor = sf::Color(200, 200, 200);

public:
// constructor: size, pos, label text, and font
    Button(const sf::Vector2f& size, const sf::Vector2f& pos, const std::string& text, sf::Font& font);

   void update(const sf::RenderWindow& window);

   void draw(sf::RenderWindow& window);

   bool isClicked() const;

    ~Button();

};
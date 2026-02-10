
#include "Button.hpp"

Button::Button(const sf::Vector2f& size, const sf::Vector2f& pos, const std::string& text, sf::Font& font)
    : font(font), label(font)
{
    shape.setSize(size);
    shape.setPosition(pos);
    shape.setFillColor(normalColor);

    label.setFont(font);
    label.setString(text);
    label.setCharacterSize(static_cast<unsigned int>(size.y * 0.5f));
    label.setFillColor(sf::Color::White);

    
}

void Button::update(const sf::RenderWindow &window)
{
    sf::Vector2i mousePos = sf::Mouse::getPosition(window);
    sf::FloatRect bounds = shape.getGlobalBounds();

    hovered = bounds.contains(static_cast<sf::Vector2f>(mousePos));

    if (hovered) {
        if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left)) {
            clicked = true;
            shape.setFillColor(clickColor);
        } else {
            shape.setFillColor(hoverColor);
        }
    } else {
        shape.setFillColor(normalColor);
    }

    
}

void Button::draw(sf::RenderWindow &window)
{
    window.draw(shape);
    window.draw(label);
}

bool Button::isClicked() const
{
    return clicked;
}

Button::Button::~Button() {

};

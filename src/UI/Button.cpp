
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

void Button::draw(sf::RenderWindow &window)
{
    window.draw(shape);
    window.draw(label);
}

bool Button::isClicked() const
{
    return clicked;
}

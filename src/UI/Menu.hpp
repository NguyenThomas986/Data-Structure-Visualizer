#pragma once
#include "Button.hpp"
#include <SFML/Graphics.hpp>
#include <vector>

class Menu
{
private:
    sf::Font& font;
    std::vector<Button> buttons;
public:
    Menu(sf::Font& font);
    ~Menu();
};

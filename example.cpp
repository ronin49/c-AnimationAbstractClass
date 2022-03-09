#include "effects.h"
#include <iostream>
#include <SFML/Graphics.hpp>
struct myEffect : Effect<sf::Time> {
bool continueEffects(){
 EFFECT({std::cout << "1: " << PROGRESS() << std::endl;},sf::seconds(100))
 EFFECT({std::cout << "2: " << PROGRESS() << std::endl;},sf::seconds(100))
}
} e;
main()
{
e.upd(sf::seconds(50));
e.upd(sf::seconds(100));
}

//OUTPUT:
//1: 0.5
//2: 0.5

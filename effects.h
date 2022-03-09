/*
sfml example (if you don't want sfml read further)

void f(sf::Time dt){
static sf::Time allTime;
allTime += dt;
sf::Time elapsed = allTime;
EFFECT(sf::seconds(5))
{
std::cout << "first five seconds";
}
EFFECT(sf::milliseconds(500))
std::cout << "then for a half of second";
}

IF YOU DON'T WANT SFML?
just redefine EFFECT_TIME_ZERO and pass your preffered type to EFFECT macro)

non-sfml example using int as number of milliseconds

#define EFFECT_TIME_ZERO 0
#include "effects.h"
void f(int dt){
static int allTime;
allTime += dt;
int elapsed = allTime;
EFFECT(5)
{
std::cout << "first five milliseconds";
}
EFFECT(500)
std::cout << "then five hundred milliseconds";
}

*/

#ifndef EFFECT_TIME_ZERO
#include <SFML/Graphics.hpp>
#define EFFECT_TIME_ZERO sf::Time::Zero
#endif
#define EFFECT(duration) if(elapsed < EFFECT_TIME_ZERO) return; elapsed -= duration; if(elapsed < EFFECT_TIME_ZERO) 

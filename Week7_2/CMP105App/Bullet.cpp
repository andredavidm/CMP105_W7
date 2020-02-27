#include "Bullet.h"
#include <iostream>
using namespace std;

Bullet::Bullet()
{
	setPosition(500, 500);
	setSize(sf::Vector2f(10, 10));
	setFillColor(sf::Color::Red);
	setVelocity(500,0);

	speed = sf::Vector2f(500, 0);
}


Bullet::~Bullet()
{
}

void Bullet::update(float dt)
{
	setPosition(speed);
	std::cout << getPosition().x << endl;
}

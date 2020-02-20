#include "Ball.h"
#include <math.h>
float gravity;
float scale;
int stepVelocity = 1;

Ball::Ball() {
	scale = 200.0f; 
	gravity = sf::Vector2f(0, 9.8f) * scale;
}

Ball::~Ball() {

}

void Ball::update(float dt) {
	sf::Vector2f pos = stepVelocity * dt + 0.5f * gravity * dt * dt; //ut+ 1/2at^2
	stepVelocity+=gravity *dt; // v = u + at  note the += is not =
	setPosition(getPosition() + pos);
}
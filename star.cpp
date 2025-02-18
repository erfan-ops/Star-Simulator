#include "star.h"


Star::Star(float x, float y, float speedx, float speedy) : x(x), y(y), speedx(speedx), speedy(speedy) {}
Star::Star() : x(0), y(0), speedx(0), speedy(0) {}

void Star::move(float& dt) noexcept {
    this->x += this->speedx * dt;
    this->y += this->speedy * dt;
}

#include "star.h"
#include "rendering.h"


Star::Star(float x, float y, float speedx, float speedy, float radius, std::array<float, 4> color) :
    x(x),
    y(y),
    speedx(speedx),
    speedy(speedy),
    radius(radius),
    color(color)
{}
Star::Star() : x(0.0f), y(0.0f), speedx(0.0f), speedy(0.0f), radius(0.0f), color({ 0.0f, 0.0f , 0.0f , 0.0f }) {}

void Star::move(float& dt) noexcept {
    this->x += this->speedx * dt;
    this->y += this->speedy * dt;
}

void Star::render(const int* nSegments) const {
    filledCircle(&x, &y, &radius, &color[0], &color[1], &color[2], &color[3], nSegments);
}

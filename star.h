#pragma once


class Star {
public:
	float x;
	float y;
	float speedx;
	float speedy;

	Star(const Star&) = delete;
	Star();
	Star(float x, float y, float speedx, float speedy);
	void move(float& dt) noexcept;
};

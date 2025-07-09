#pragma once

#include <string>
#include <vector>
#include <array>

// Define a struct to represent your settings
struct Settings {
	float targetFPS;
	std::vector<std::array<float, 4>> backGroundColors;

	std::array<float, 4> lineColor;
	float lineMinWidth;
	float lineMaxWidth;

	struct Stars {
		float radius;
		int segments;
		std::array<float, 4> color;
		int count;
		float minSpeed;
		float maxSpeed;
	} stars;

	float mouseRadius;
};

// Function to load settings from a JSON file
Settings loadSettings(const std::string& filename);

#include "settings.h"
#include <fstream>
#include <nlohmann/json.hpp>

// Function to load settings from a JSON file
Settings loadSettings(const std::string& filename) {
	std::ifstream file(filename);
	nlohmann::json j;
	file >> j;

	Settings settings;

	settings.targetFPS = j["fps"];
	settings.backGroundColors = j["background-colors"].get<std::vector<std::array<float, 4>>>();
	settings.stars.radius = j["stars"]["radius"];
	settings.stars.segments = j["stars"]["segments"];
	settings.stars.color = j["stars"]["color"].get<std::array<float, 4>>();
	settings.stars.count = j["stars"]["count"];
	settings.stars.maxSpeed = j["stars"]["max-speed"];
	settings.lineColor = j["line-color"].get<std::array<float, 4>>();
	settings.lineMinWidth = j["line-min-width"];
	settings.lineMaxWidth = j["line-max-width"];

	settings.mouseRadius = j["mouse-radius"];

	return settings;
}

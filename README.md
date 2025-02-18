# Star Simulator - Interactive Live Desktop Wallpaper

## Description
Star Simulator is a live and interactive desktop wallpaper application, featuring a stunning starfield that reacts to your cursor with dynamic line connections.

## Features
- 🌟 Interactive starfield with smooth animations
- 🖱️ Cursor proximity detection with star connections
- ⚙️ Configurable settings via `settings.json`
- 🚀 High-performance OpenGL rendering
- 💻 Developed in C, C++, and Assembly (primarily C++)

## Requirements
- OS: Windows 10/11
- GPU: OpenGL-compatible
- Compiler: Visual Studio 2022 (recommended)

## Installation
1. **Download**: Download the latest release of Star Simulator from the [Releases](https://github.com/erfan-ops/Star-Simulator/releases) page.
2. **Launch**: Once installed, launch ```Star Simulator.exe```.

## Building
1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/star-simulator.git
   ```
2. Open the project in Visual Studio 2022.
3. Build the solution.
4. Run the executable from the output directory.

## Configuration
Customize the experience by editing `settings.json`:
```json
{
  "fps": 120,
  "background-colors": [
    [0, 0, 0, 1],
    [0.11, 0, 0.21, 1],
    [0.21, 0, 0.09, 1]
  ],
  "line-min-width": 0.5,
  "line-max-width": 3.5,
  "line-color": [1, 1, 1, 0.4],
  "stars": {
    "radius": 3.5,
    "segments": 6,
    "color": [1, 1, 1, 0.4],
    "count": 230,
    "max-speed": 20
  },
  "mouse-radius": 270
}
```
- `fps`: Frame rate limit
- `background-colors`: Background color gradient (RGBA)
- `line-min-width` / `line-max-width`: Line thickness range
- `line-color`: Line color (RGBA)
- `stars.count`: Number of stars displayed
- `stars.radius`: Size of each star
- `stars.max-speed`: Maximum star movement speed
- `mouse-radius`: Proximity range for star-line interactions

## Contribution
Pull requests are welcome. For major changes, open an issue to discuss your ideas.

## License
This project is licensed under the [MIT License](LICENSE).

## Acknowledgments
- OpenGL for rendering
- Visual Studio for development
- Inspired by particle simulations and live wallpapers

🌠 Enjoy your cosmic journey with Star Simulator! 🌌


#ifndef GAME_H
#define GAME_H

#include <Debug.h>

#include <iostream>
#include <GL/glew.h>
#include <GL/wglew.h>
#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>

#include <Vector3.h>
#include <Matrix3.h>

#define STB_IMAGE_IMPLEMENTATION
#include <stb_image.h>
#include <fstream>

using namespace std;

class Game
{
public:
	Game();
	~Game();
	void run();
private:
	sf::Window window;
	bool isRunning = false;
	void initialize();
	void update();
	void render();
	void unload();

	std::string shaderFile(std::string t_filePath);

	sf::Clock clock;
	sf::Time elapsed;

	float scaleDown = 99.9;
	float scaleUp = 100.1f;
	float translateSpeed = 0.001f;
	float rotationAngle = 0.05f;
};

#endif
#pragma once

#include <SFML/Graphics.hpp>

class Window
{

public:
	Window(const char* name, int width, int height);
	~Window();

	bool isOpen();

	void update();

	void draw();

	void clear();

	void addToDrawing(sf::RectangleShape shape);


private:
	int m_width, m_height;

	const char* m_Name;

	sf::Event pollEvent;

	sf::RenderWindow m_Window;

	bool m_Closed;

	bool init();

	void pollEvents();

	std::vector<sf::RectangleShape> m_shapes;
};


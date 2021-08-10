#pragma once
#include <SFML/Graphics.hpp>
#include "Window.h"

class Entity
{
public:
	Entity(float posX, float posY, float width, float height, Window& window);

	sf::RectangleShape rect;

	void setPos(float posX, float posY);

	void setSize(float width, float height);

private:
	float m_posX;
	float m_posY;

	float m_width;
	float m_height;
};


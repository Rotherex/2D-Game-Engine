#include "Entity.h"

Entity::Entity(float posX, float posY, float width, float height, Window& window) 
{
	m_posX = posX;
	m_posY = posY;

	m_width = width;
	m_height = height;

	setPos(m_posX, m_posY);
	setSize(m_width, m_height);

	window.addToDrawing(rect);
}

void Entity::setPos(float posX, float posY)
{
	m_posX = posX;
	m_posY = posY;
	rect.setPosition(sf::Vector2f(posX, posY));
}

void Entity::setSize(float width, float height)
{
	m_width = width;
	m_height = height;

	rect.setSize(sf::Vector2f(width, height));
}
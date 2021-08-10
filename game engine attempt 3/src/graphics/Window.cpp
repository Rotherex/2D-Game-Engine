#include "Window.h"

Window::Window(const char* name, int width, int height) {
	m_Name = name;
	m_width = width;
	m_height = height;
	init();
}

Window::~Window()
{

}

void Window::update() 
{
	if (m_Window.pollEvent(pollEvent)) {
		pollEvents();
	}

	m_Window.display();
}

void Window::clear()
{
	m_Window.clear();
}

bool Window::isOpen()
{
	return m_Window.isOpen();
}

bool Window::init()
{
	m_Window.create(
		sf::VideoMode(m_width, m_height), // window size, width x height
		m_Name // window name
	);

	return true;
}

void Window::pollEvents()
{
	if (pollEvent.type == sf::Event::Closed) m_Window.close();
}

void Window::addToDrawing(sf::RectangleShape shape) {
	m_shapes.push_back(shape);
}

void Window::draw()
{
	for (int i = 0; i < m_shapes.size(); i++) {
		m_Window.draw(m_shapes[i]);
	}
}
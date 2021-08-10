#include "graphics/Window.h"
#include "graphics/Entity.h"

int main() {

	Window window(
		"My first window",
		800,
		600
	);

	while (window.isOpen()) {
		window.clear();
		//draw

		Entity rect(500.f, 300.f, 120.f, 50.f, window);

		window.draw();

		window.update();
	};


}
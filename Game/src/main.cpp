#include "Window.h"

int main() {
	Window window("Hiiii", 800, 600);

	while (window.isOpen()) {
		window.update();
	}
}
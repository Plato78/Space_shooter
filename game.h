#pragma once
#include "settings.h"
#include "player.h"

class Game {
private:
	sf::RenderWindow window;
	Player player;

	void checkEvents() {
		sf::Event event;
		while (window.pollEvent(event))
			if (event.type == sf::Event::Closed) window.close();
	}

	void update() {
		player.update(player);
	}
	void checkCollisions() {}
	void draw() {
		window.clear();
		window.draw(player.getSprite());
		window.display();
	}

public:
	Game() {
		window.create(sf::VideoMode(width, height), WINDOW_TITLE);
		window.setFramerateLimit(FPS);
	}
	void play() {
		while (window.isOpen())
		{
			checkEvents();
			update();
			checkCollisions();
			draw();
		}
	}
};
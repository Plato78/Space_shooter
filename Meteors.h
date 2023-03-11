#pragma once
#include "settings.h"

class Meteor {
private:
	sf::Sprite sprite;
	sf::Texture texture;
	float speedx, speedy;
	static std::string mFileNames[];
public:
	Meteor() {
		int index = rand() % meteor_type_qty;
		texture.loadFromFile(mFileNames[index]);
		sprite.setTexture(texture);
	}
};
 std::string  Meteor::mFileNames[] = { "meteorGrey_big1.png,meteorGrey_big2.png,meteorGrey_med1.png,meteorGrey_med2.png,meteorGrey_small1.png,meteorGrey_small2.png,meteorGrey_tiny1.png,meteorGrey_tiny2.png" };

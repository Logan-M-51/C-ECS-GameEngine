#pragma once
#include "game.h"

class GameObject {

public:
	GameObject(const char* tecturesheet, int x, int y);
	~GameObject();

	void Update();
	void Render();

private:
	int xpos;
	int ypos;

	SDL_Texture* objTexture;
	SDL_Rect srcRect, destRect;
};


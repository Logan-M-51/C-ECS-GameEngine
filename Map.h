#pragma once
#include <string>

class Map
{
public:
	Map(std::string tID, int ms, int ts); //map file path, map scale, tile size
	~Map();

	void AddTile(int srcX, int srcY, int xpos, int ypos);
	void LoadMap(std::string path, int sizeX, int sizeY);

private:
	std::string texID;
	int mapScale;
	int tileSize;
	int scaledSize;

};

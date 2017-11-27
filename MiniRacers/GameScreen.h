#pragma once

#include "src/Screen.h"

#include "src/Player.h"
#include "src/BotRacer.h"
#include "src/Camera.h"
#include "src/HUD.h"

#include "MessageManager.h"

#include <unordered_map>

class GameScreen : public Screen
{
public:
	GameScreen();
	~GameScreen();

	void LoadContent();
	void UnloadContent();
	void Update();
	void Draw(sf::RenderWindow &Window);

private:
	sf::Texture backgroundTexture;
	sf::Sprite backgroundImage;

	// Racers
	Player player_1;
	std::vector<BotRacer*> botRacers;

	Camera camera;
	HUD hud;
	
	std::unordered_map<std::string, RacerEntity> networkPlayers; //get from lobby
};


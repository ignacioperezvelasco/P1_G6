#include <iostream>
#include "Map.h"
#include "Player.h"
#include "Input.h"

	Player::Player(Map &m): mapus(&m)
	{
		jugadorX = rand() % mapus->numRows;
		jugadorY = rand() % mapus->numColumns;
		mapus->md[jugadorY][jugadorX] = '@';
	};

	void Player::MovimientoPlayer(Input::Key key)
	{
		mapus->md[jugadorY][jugadorX] = '.';
		switch (key)
		{
		case Input::Key::W:			
			jugadorY -= 1; break;
		case Input::Key::A:
			jugadorX -= 1; break;
		case Input::Key::D:
			jugadorX += 1; break;
		case Input::Key::S:
			jugadorY += 1; break;
		};
		mapus->md[jugadorY][jugadorX] = '@';
	}
	






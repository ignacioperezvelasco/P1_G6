#pragma once
#include "Input.h"
class Player
{
public:
	int jugadorX;
	int jugadorY;
	Map *mapus;
	Player(Map &m);
	void MovimientoPlayer(Input::Key key);

};
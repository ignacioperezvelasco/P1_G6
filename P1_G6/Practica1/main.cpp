#include <iostream>
#include "Map.h"
#include "Player.h"
#include "Input.h"
#include <time.h>
#include <conio.h>

int main() {

	srand(time(nullptr));

	int difficulty;
	std::cout << "Introduce la dififucltad:" << std::endl << "1-Easy" << std::endl << "2-Medium" << std::endl << "3-Hard"<<std::endl<<"La dificultad elegida es: ";

	std::cin >> difficulty;

	Map map(difficulty);
	map.rellenarmapa();
	Player player(map);
	map.imprimirmapa();
	Input::Key key;
	while (true)
	{	
		key=Input::getKey();
		
		if (key != Input::Key::NONE) {
			player.MovimientoPlayer(key);
			system("cls");
			map.imprimirmapa();
			
			
		}
		
	}

	system("pause");
}
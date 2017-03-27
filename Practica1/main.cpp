#include <iostream>
#include "Mapa.h"
#include "CoinManager.h"
#include "Player.h"
#include <time.h>
#include <ctime>

int main() {

	srand(time_t(NULL));
	
	float tiempo = clock();
	int difficulty;
	std::cout << "Introduce la dififucltad:" << std::endl << "1-Easy" << std::endl << "2-Medium" << std::endl << "3-Hard" << std::endl << "La dificultad elegida es: ";
	
	std::cin >> difficulty;

	
	//Inicializar mapa
	Mapa map(difficulty);

	map.inicializarmapa();

	//inicializar coin
	CoinManager coin(map);

	std::cout << "\n Objetive: you have to pick up: " <<coin.monedas << std::endl;
	std::cout << "\n";
	system("pause");
	system("cls");

	//iniciar player
	Player player(map);
	map.printmapa();
	Input::Key key;
	int time1 = clock();
	int time2;

	do
	{
		key = Input::getKey();

		if (key != Input::Key::NONE) {
			player.MovimientoPlayer(key);
			system("cls");
			map.printmapa();
			std::cout << "\n Score: " << player.score << '/' << coin.monedas << std::endl;
			time2 = (clock() - time1) / 1000;
			std::cout << " Time: " << time2 << std::endl;

		}
		if (player.score == coin.monedas) {
			coin.cmonedas();
			coin.iniciarmonedasmapa();
			coin.monedas = static_cast<int>(coin.monedas + player.score);

		}

		if (key == Input::Key::ENTER)
			std::cout << "Llevas un score de: " << player.totalscore << std::endl;

	} while(player.exit == false);

	//fin de partida
	map.~Mapa();
	coin.~CoinManager();
	player.~Player();

	system("cls");
	std::cout << " Score: " << player.score << "\n Time: " << time2 << std::endl;
	system("pause");
		
	

}
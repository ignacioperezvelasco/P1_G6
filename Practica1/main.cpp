#include <iostream>
#include "Header.h"
#include <time.h>

int main() {

	srand(time(nullptr));

	int difficulty;
	std::cout << "Introduce la dififucltad:" << std::endl << "1-Easy" << std::endl << "2-Medium" << std::endl << "3-Hard"<<std::endl<<"La dificultad elegida es: ";

	std::cin >> difficulty;

	Map map(difficulty);
	map.mapa();


	system("pause");


}
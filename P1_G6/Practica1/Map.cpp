#include <iostream>
#include "Map.h"

	Map::Map(int _dificultad) :
		dificultad(_dificultad),
		numRows(rand() % ((_dificultad * 5 * 2) - (5 * _dificultad)) + 5 * _dificultad),
		numColumns(rand() % ((_dificultad * 5 * 2) - (5 * _dificultad)) + 5 * _dificultad)
	{
		md = new char *[numRows];
		for (int i = 0; i < numRows; i++) {
			md[i] = new char[numColumns];
		}
	}

	void Map::rellenarmapa()
	{
		for (int i = 0; i < numRows; i++)
		{
			for (int j = 0; j < numColumns; j++)
			{
				md[i][j] = '.';
			}
		}
	}

		void Map::imprimirmapa() 
		{
			for (int i = 0; i < numRows; i++)
			{
				std::cout << std::endl;

				for (int j = 0; j < numColumns; j++)
				{
					std::cout << md[i][j];
				}
			}
		}
	






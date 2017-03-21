#pragma once
#include <iostream>
class Map
{
public:
	//atributos
	int dificultad;
	int numRows;
	int numColumns;
	char **md;

	Map(int dificultad) :
		dificultad(dificultad),
		numRows(rand() % ((dificultad * 5 * 2) - (5 * dificultad)) + 5 * dificultad),
		numColumns(rand() % ((dificultad * 5 * 2) - (5 * dificultad)) + 5 * dificultad)

	{
		md = new char *[numRows];
		for (int i = 0; i < numRows; i++) {
			md[i] = new char[numColumns];
		}
	}	

	void mapa()
	{
		for (int i = 0; i < numRows; i++)
		{
			for (int j = 0; j < numColumns; j++)
			{
				md[i][j] = '.';
			}
		}
		for (int i = 0; i < numRows; i++)
		{
			std::cout<<std::endl;

			for (int j = 0; j < numColumns; j++)
			{
				std::cout << md[i][j];
			}
		}
	}
};
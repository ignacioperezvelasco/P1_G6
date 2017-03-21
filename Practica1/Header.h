#pragma once
#include <iostream>
class Map
{
public:
	//atributos
	int dificultad=2;
	int numRows;
	int numColumns;
	int **md;

	Map(int dificultad) :
		dificultad(dificultad),
		numRows(dificultad * 5),
		numColumns(dificultad * 5*2)
	{
		md = new int *[numRows];
		for (int i = 0; i < numRows; i++) {
			md[i] = new int[numColumns];
		}
	}
	void cambiarpunto(int x, int y, char nuevoelemento)
	{
		md[x][y] = nuevoelemento;
	}

	void printmapa()
	{
		for (int i = 0; i < numRows; i++)
		{
			for (int j = 0; j < numColumns; j++)
			{
				std::cout << md[i][j] << std::endl;
			}
		}
	}
};

class Player 
{
	Map &dif:dificultad;
	struct player {
		int x;
		int y;
	};
	//que celda comprovar(funcion en descripción practica)
	void comprovar(int posicion[2]) {};
};
/*
class coinManager 
{
	int score (int score) {

		if(score==Monedas)
			//WIN;
		else
		{
		}
		return score;
	}
	const int Monedas=((rand()%10 + 3)*map::dificultad);
	void eliminarMonedas();	
};*/
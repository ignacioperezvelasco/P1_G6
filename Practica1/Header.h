#pragma once
class map
{
public:
	int dificultad;
	int inicializarmapa(int *dificultad) {}
	void cambiarpunto(int x, int y, char nuevoelemento) {	}
	void printmapa() {}
};

class player 
{
	int posactual[2];
	int poscomprovar[2];
	//que celda comprovar(funcion en descripción practica)
	void comprovar(int posicion[2]) {};
};

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
};
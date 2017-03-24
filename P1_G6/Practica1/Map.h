#pragma once
class Map
{
public:	
	Map(int _dificultad);
	int dificultad;	
	int numRows;
	int numColumns;
	char **md;
	void rellenarmapa();
	void imprimirmapa();
};
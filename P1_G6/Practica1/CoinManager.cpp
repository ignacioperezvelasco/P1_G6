/*#include <iostream>
#include "Map.h"

class CoinManager {

	Map &map;

public:

	int maxmonedas = (((map.numColumns) * (Map.numRows) / 100) * 13);
	int minmonedas = ((Map.numColumns)*(Map.numRows) / 100 * 3);

	int monedas = rand() % (maxmonedas - minmonedas) + minmonedas;

	void inicirmonedasmapa() {
		for (int i = 0; i < monedas; i++) {
			int randrow;
			int randcolumn;
			do {
				randrow = rand() % Map.numRows;
				randcolumn = rand() % Map.numColumns;
			} while (Map.md[randrow][randcolumn] = '$');
			Map.md[randrow][randcolumn] = '$';
		}
	}

	void eliminarmoneda(int x, int y) {
		Map.md[x][y] = '@';
		--monedas;
	}


};*/

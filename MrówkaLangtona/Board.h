/*
Klasa : Klasa Board reprezentuje tablicê obiektów typu Cell
Autor: Mateusz Wypych
Data utworzenia: 01.04.2020
Data poprawki/edycja:
*/
#ifndef Board_H
#define Board_H
#include "Cell.h"

class Board
{

protected:

	int size_x;
	int size_y;

private:
	Board(const Board& b1);

public:

	//konstruktory
	Board();
	Board(int x, int y);
	Board & operator=(const Board &b);
	~Board();

	//Dwuwymiarowa tablica punktow
	Cell **Tab;

	//getery
	int getSize_x();
	int getSize_y();

	//setery
	void setSize_x(int x);
	void setSize_y(int y);
	void SetPoints(int x, int y, int status); // pozycja x pozycja y , status wylaczony czy wlaczony


	friend std::ostream& operator<<(std::ostream& out, const Board& b1);

};




#endif

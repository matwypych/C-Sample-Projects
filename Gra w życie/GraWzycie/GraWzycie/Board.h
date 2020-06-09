#ifndef Board_H
#define Board_H
#include "Cell.h"

class Board
{

protected:

	int size_x;
	int size_y;

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
	void SetPoints(int x, int y, int status); // pozycja x pozycja y , status w³¹czony czy wy³¹czony 



};




#endif

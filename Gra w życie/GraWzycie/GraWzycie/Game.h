#ifndef Game_H
#define Game_H

#include "Board.h"

class Game
{
protected:
	Board GameBoard; // g³owna plansza
	Board Temp; // plansza tymczasowa
public:

	//konstruktory i destruktor
	Game();
	~Game();
	Game & operator=(const Game &g);

	//setery
	void SetActive(int x, int y,int s);
	void SetSize(int x, int y);

	//inne metody
	void analysie(); // analizuje plansze
	void copy(); // kopiuje plansze g³ówn¹ do planszy pomocniczej

	//metoda czysto wirtualna
	virtual void show()=0;

};

#endif 


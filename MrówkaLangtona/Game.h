/*
Klasa : Bazowa klasa Game
Autor: Mateusz Wypych
Data utworzenia: 01.04.2020
Data poprawki/edycja:
*/

#ifndef Game_H
#define Game_H

#include "Board.h"
#include "Ant.h"

class Game
{
protected:
	
	Board GameBoard; // glowna plansza
	Ant ant;
	void analysie();
	//pozosta³e metody
	void sprawdzZakres();
	void sprawdzPuste();
	void sprawdzPelne();

private:
	Game(const Game& g1);

public:
	//konstruktory i destruktor
	Game();
	Game& operator=(const Game& g);
	virtual ~Game();

	

	//metody czysto wirtualne
	virtual void show() = 0;
	virtual void play() = 0;

};

#endif


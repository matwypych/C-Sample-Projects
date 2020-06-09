/*
Klasa : Pochodna klasa GameText
Autor: Mateusz Wypych
Data utworzenia: 01.04.2020
Data poprawki/edycja: 
*/

#ifndef GameText_H
#define GameText_H

#include "Game.h"
#include <Windows.h>

class GameText : public Game
{

private:

	GameText(const GameText& g1);

public:

	GameText();
	~GameText();
	GameText& operator=(const GameText& st);

	// przedefiniowana metoda wirtualna 
	void show();
	void play();


};


#endif 

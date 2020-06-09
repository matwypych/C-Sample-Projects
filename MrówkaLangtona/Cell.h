/*
Klasa : Klasa Cell reprezentuje pojedyncza komórke w planszy
Autor: Mateusz Wypych
Data utworzenia: 01.04.2020
Data poprawki/edycja:
*/
#ifndef Cell_H
#define Cell_H

#include <iostream>

class Cell
{
protected:
	int status; // 0 - off , 1 - on;
	char Cstatus; // znak który bedzie wyswietlany na planszy . oznacza 0, x oznacza 1

private:
	Cell(const Cell& c1);

public:

	//konstruktory
	Cell();
	Cell(int i);
	Cell & operator=(const Cell &b);

	//getery
	int getStatus();

	//setery
	void setStatus(int i);

	//przeciazone operatory
	friend std::ostream & operator<<(std::ostream &out, const Cell &c1);


};

#endif

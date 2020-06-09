/*
Klasa : Klasa Ant reprezentuje mrówkê
Autor: Mateusz Wypych
Data utworzenia: 01.04.2020
Data poprawki/edycja:
*/
#ifndef Ant_H
#define Abt_H

class Ant
{
protected:
	int position_x;
	int position_y;
	enum Direction {Up,Right,Down,Left};
	int dir;

public:
	Ant();
	Ant(int posX, int posY, int dr);
	~Ant();
	Ant(const Ant& a);

	int getposition_x();
	int getposition_y();
	void setposition_x(int posX);
	void setposition_y(int posy);
	void turnLeft();
	void turnRight();
	int getdir();
	void setDir(int dr);
	void move();

};


#endif

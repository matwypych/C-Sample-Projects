#include "Ant.h"

Ant::Ant()
{
	dir = 0;
	position_x = 10;
	position_y = 10;
}

Ant::Ant(int posX, int posY, int dr)
{
	position_x = posX;
	position_y = posY;
	dir = dr;
}

Ant::~Ant()
{
}

Ant::Ant(const Ant& a)
{
	position_x = a.position_x;
	position_y =a.position_y;
	dir = a.dir;
}

int Ant::getposition_x()
{
	return position_x;
}

int Ant::getposition_y()
{
	return position_y;
}

void Ant::setposition_x(int posX)
{
	position_x = posX;
}

void Ant::setposition_y(int posy)
{
	position_y = posy;
}

void Ant::turnLeft()
{
	dir--;
	if (dir < Up)
		dir = Left;

}

void Ant::turnRight()
{
	dir++;
	if (dir > Left)
		dir = Up;
}

int Ant::getdir()
{
	return dir;
}

void Ant::setDir(int dr)
{
	dir = dr;
}

void Ant::move()
{
	if (dir == Up)
		position_y--;
	else if (dir == Right)
		position_x++;
	else if (dir == Down)
		position_y++;
	else if (dir == Left)
		position_x--;
}

#include "Game.h"
#include <Windows.h>
Game::Game()
{
	ant.setDir(0);
	ant.setposition_x(4);
	ant.setposition_y(4);
}

Game& Game::operator=(const Game& g)
{
	if (this == &g)
	{
		return *this;
	}

	GameBoard = g.GameBoard;

	return *this;
}

Game::~Game()
{

}

void Game::analysie()
{
	sprawdzZakres();

	if (GameBoard.Tab[ant.getposition_x()][ant.getposition_y()].getStatus() == 0)
	{
		sprawdzPuste();
	}
	else if (GameBoard.Tab[ant.getposition_x()][ant.getposition_y()].getStatus() == 1)
	{
		sprawdzPelne();
	}

}

void Game::sprawdzZakres()
{
	if (ant.getposition_x() < 0)
		ant.setposition_x(GameBoard.getSize_x() - 1);
	else if (ant.getposition_x() > GameBoard.getSize_x() - 1)
		ant.setposition_x(0);
	else if (ant.getposition_y() < 0)
		ant.setposition_y(GameBoard.getSize_y() - 1);
	else if (ant.getposition_y() > GameBoard.getSize_y() - 1)
		ant.setposition_y(0);
	
}

void Game::sprawdzPuste()
{

	GameBoard.Tab[ant.getposition_x()][ant.getposition_y()].setStatus(1);
	ant.turnLeft();


	if (ant.getposition_x() > GameBoard.getSize_x() - 1)
		ant.setposition_x(0);

	else if (ant.getposition_x() < 0)
		ant.setposition_x(GameBoard.getSize_x() - 1);

	else if (ant.getposition_y() > GameBoard.getSize_y() - 1)
		ant.setposition_y(0);

	else if (ant.getposition_y() < 0)
		ant.setposition_y(GameBoard.getSize_y() - 1);
	else
		ant.move();
}

void Game::sprawdzPelne()
{

	GameBoard.Tab[ant.getposition_x()][ant.getposition_y()].setStatus(0);
	ant.turnRight();


	if (ant.getposition_x() > GameBoard.getSize_x() - 1)
		ant.setposition_x(0);
	else if (ant.getposition_x() < 0)
		ant.setposition_x(GameBoard.getSize_x() - 1);
	else if (ant.getposition_y() > GameBoard.getSize_y() - 1)
		ant.setposition_y(0);
	else if (ant.getposition_y() < 0)
		ant.setposition_y(GameBoard.getSize_y() - 1);
	else
		ant.move();
}

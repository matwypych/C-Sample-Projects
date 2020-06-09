#include "Game.h"

Game::Game()
{
	
}


Game::~Game()
{
}

Game & Game::operator=(const Game & g)
{
	if (this == &g)
	{
		return *this;
	}

	GameBoard = g.GameBoard;
	Temp = g.Temp;

	return *this;
}

void Game::SetActive(int x, int y, int s)
{
	GameBoard.SetPoints(x, y, s);
}

void Game::SetSize(int x, int y)
{
	GameBoard.setSize_x(x);
	GameBoard.setSize_y(y);
}

void Game::copy()
{
	Temp = GameBoard;
}

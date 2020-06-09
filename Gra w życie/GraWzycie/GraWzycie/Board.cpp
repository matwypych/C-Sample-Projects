#include "Board.h"

Board::Board()
{
	size_y = 26;
	size_x = 26;
	Tab = new Cell*[size_y];
	for (int i = 0; i < size_y; i++)
		Tab[i] = new Cell[size_x];
}

Board::Board(int x, int y)
{
	size_y = y;
	size_x = x;
	Tab = new Cell*[size_y];
	for (int i = 0; i < size_y; i++)
		Tab[i] = new Cell[size_x];
}

Board & Board::operator=(const Board & b)
{
	for (int i = 0; i < size_y; i++)
	{
		for (int j = 0; j < size_x; j++)
		{
			Tab[i][j] = b.Tab[i][j];
		}
	}

	return *this;
}

Board::~Board()
{
	for (int i = 0; i < size_y; i++)
		delete[] Tab[i];
}

int Board::getSize_x()
{
	return size_x;
}

int Board::getSize_y()
{
	return size_y;
}

void Board::setSize_x(int x)
{
	size_x = x;
}

void Board::setSize_y(int y)
{
	size_y = y;
}

void Board::SetPoints(int x, int y, int status)
{
	if (status == 1)
	{
		Tab[x][y].setStatus(status);
	}
	else if (status == 0)
	{
		Tab[x][y].setStatus(status);
	}
	else
		std::cout << "Podano niepoprawny status. 1 wlacz, 0 wylacz";
	
}


#include "Board.h"

Board::Board()
{
	size_y = 11;
	size_x = 11;
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
	size_x = b.size_x;
	size_y = b.size_y;

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
	{
		if(Tab[i]!=nullptr)
		delete[] Tab[i];
	}
		
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

std::ostream& operator<<(std::ostream& out, const Board& b1)
{
	out << "    ";

	for (int i = 0; i < b1.size_x ; i++)
	{
		if (i < 10)
			out << i << "  ";
		else
			out << i << " ";
	}

	out << std::endl;

	for (int i = 0; i < b1.size_y; i++)
	{
		if (i < 10)
			out << i << ":  ";
		else
			out << i << ": ";

		for (int j = 0; j < b1.size_x; j++)
		{
			out << b1.Tab[i][j] << "  ";
		}
		out << std::endl;
	}
	return out;
}

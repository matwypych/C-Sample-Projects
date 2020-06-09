#include "ShowText.h"

ShowText::ShowText() : Game()
{
}

ShowText::~ShowText() 
{
}

ShowText & ShowText::operator=(const ShowText & st)
{
	Game::operator=(st);
	return *this;
}

void ShowText::show()
{
	std::cout << "    ";

	for (int i = 0; i < GameBoard.getSize_x(); i++)
	{
		if (i < 10)
			std::cout << i << "  ";
		else
			std::cout << i << " ";
	}

	std::cout << std::endl;

	for (int i = 0; i < GameBoard.getSize_y(); i++)
	{
		if (i < 10)
			std::cout << i << ":  ";
		else
			std::cout << i << ": ";

		for (int j = 0; j < GameBoard.getSize_x(); j++)
		{
			std::cout << GameBoard.Tab[i][j] << "  ";
		}
		std::cout << std::endl;
	}
}

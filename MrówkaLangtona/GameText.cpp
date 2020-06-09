#include "GameText.h"

GameText::GameText() : Game()
{

}

GameText::~GameText()
{
}

GameText& GameText::operator=(const GameText& st)
{
	Game::operator=(st);
	return *this;
}

void GameText::show()
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

void GameText::play()
{

	system("CLS");
	while (true)
	{

		system("CLS");
		analysie();
		show();
		//Sleep(1200);
	}
}



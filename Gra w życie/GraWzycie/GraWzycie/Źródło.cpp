#include "Board.h"
#include "Cell.h"
#include "Game.h"
#include "ShowText.h"
#include <iostream>

int main()
{
	ShowText text1;
	Game *g1;

	g1 = &text1;
	
	g1->show();
	g1->SetSize(10, 10);
	g1->SetActive(1, 1, 1);
	g1->SetActive(1, 3, 1);
	g1->SetActive(1, 2, 1);
	g1->show();

	//system("PAUSE");
	std::cin.get();
}
#include "Game.h"
#include "GameText.h"
#include <iostream>;

using namespace std;

int main()
{
	Game* gra;

	GameText g1;
	gra = &g1;
	gra->play();

}

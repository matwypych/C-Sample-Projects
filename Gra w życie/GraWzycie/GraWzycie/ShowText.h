#ifndef ShowText_H
#define ShowText_H

#include "Game.h"


class ShowText : public Game
{

public:

	ShowText();
	~ShowText();
	ShowText & operator=(const ShowText &st);

	// przedefiniowana metoda wirtualna 
	void show();
};


#endif 

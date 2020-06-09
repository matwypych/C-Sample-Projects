#ifndef Cell_H
#define Cell_H

#include <iostream>

class Cell
{
protected:
	int status; // 0 - off , 1 - on;
	char Cstatus; // znak który bêdzie wyœwietlany na planszy . oznacza 0, x oznacza 1

public:

	//konstruktory
	Cell();
	Cell(int i);
	Cell & operator=(const Cell &b);

	//getery
	int getStatus();

	//setery
	void setStatus(int i);

	//przeciazone operatory
	friend std::ostream & operator<<(std::ostream &out, const Cell &c1);


};

#endif 

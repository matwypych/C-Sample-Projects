#include "Cell.h"

Cell::Cell()
{
	status = 0;
	Cstatus = '.';
}

Cell::Cell(int i)
{
	if (i == 0)
	{
		status = i;
		Cstatus = '.';
	}
	else if (i == 1)
	{
		status = i;
		Cstatus = 'x';
	}
	else
		std::cout << "Podaj poprawna wartosc: 0 albo 1";
	
}

Cell & Cell::operator=(const Cell & b)
{
	if (this == &b)
	{
		return *this;
	}

	status = b.status;
	Cstatus = b.Cstatus;
	
	return *this;
}

int Cell::getStatus()
{
	return status;
}

void Cell::setStatus(int i)
{
	if (i == 1)
	{
		status = i;
		Cstatus = 'x';
	}
	else if (i == 0)
	{
		status = i;
		Cstatus = '.';
	}	
	else
		std::cout << "Podaj poprawna wartosc: 0 albo 1";
	
}

std::ostream & operator<<(std::ostream & out, const Cell & c1)
{
	return std::cout << c1.Cstatus;
	
}

#include "Tetrad.h"



double Tetrad::volume()
{
	return (pow(a, 3)*sqrt(2))/2;
}

Tetrad::Tetrad()
{
	this->a = 0.0;
}

Tetrad::Tetrad(double size)
{
	this->a = size;
}


Tetrad::~Tetrad()
{
}

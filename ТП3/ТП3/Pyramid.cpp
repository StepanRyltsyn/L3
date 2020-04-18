#include "Pyramid.h"



double Pyramid::volume()
{
	return 1/3*pow(size, 2)*h;
}

Pyramid::Pyramid()
{
	this->h = 0.0;
	this->size = 0.0;
}

Pyramid::Pyramid(double size, double h)
{
	this->h = h;
	this->size = size;
}


Pyramid::~Pyramid()
{
}

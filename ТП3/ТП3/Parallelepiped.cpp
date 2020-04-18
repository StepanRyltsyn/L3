#include "Parallelepiped.h"

double Parallelepiped::volume()
{
	return h*l*w;
}

Parallelepiped::Parallelepiped()
{
	this->h = 0.0;
	this->l = 0.0;
	this->w = 0.0;
}

Parallelepiped::Parallelepiped(double h, double l, double w)
{
	this->h = h;
	this->l = l;
	this->w = w;
}


Parallelepiped::~Parallelepiped()
{
}

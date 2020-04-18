#include "Sphere.h"



double Sphere::volume()
{
	return 4/3*PI*pow(r, 3);
}

Sphere::Sphere()
{
	this->r = 0.0;
}

Sphere::Sphere(double size)
{
	this->r = size;
}


Sphere::~Sphere()
{
}

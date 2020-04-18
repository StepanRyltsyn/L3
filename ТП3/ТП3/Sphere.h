#pragma once
#include "Shape.h"
class Sphere:
	public Shape
{
private:
	double r;
public:
	double volume()override;
	friend ostream& operator<<(ostream&out, const Sphere&p);
	Sphere();
	Sphere(double size);
	~Sphere();
};


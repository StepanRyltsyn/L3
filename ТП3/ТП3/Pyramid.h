#pragma once
#include "Shape.h"
class Pyramid :
	public Shape
{
private:
	double size, h;
public:
	double volume() override;
	friend ostream& operator<<(ostream&out, const Pyramid&p);
	Pyramid();
	Pyramid(double size, double h);
	~Pyramid();
};


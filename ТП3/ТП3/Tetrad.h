#pragma once
#include "Shape.h"
class Tetrad :
	public Shape
{
private:
	double a;
public:
	double volume() override;
	friend ostream& operator<<(ostream&out, const Tetrad&p);
	Tetrad();
	Tetrad(double size);
	~Tetrad();
};


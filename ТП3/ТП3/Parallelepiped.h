#pragma once
#include "Shape.h"
class Parallelepiped :
	public Shape
{
private:
	double h, l, w;
public:
	double volume() override;
	Parallelepiped();
	friend ostream& operator<<(ostream&out, const Parallelepiped&p);
	Parallelepiped(double h, double l, double w);
	~Parallelepiped();
};


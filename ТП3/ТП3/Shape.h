#pragma once
#include <iostream>
#include <math.h>
#define PI 3.14
using namespace std;
class Shape
{
public:
	virtual double volume()=0;
	Shape();
	virtual ~Shape();
	
};


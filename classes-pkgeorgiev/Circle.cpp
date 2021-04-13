#include "Circle.h"

void Circle::setRadius(double newRadius)
{
	if (newRadius <= 0) {
		throw "Invalid Radius!";
	}
	radius = newRadius;
}

double Circle::getDiameter()
{
	return 2 * radius; 
}

double Circle::getArea()
{
	return 3.14 * radius * radius;
}

double Circle::getCircumference()
{
	return 6.28 * radius;
}


double Circle::getRadius()
{
	return radius;
}
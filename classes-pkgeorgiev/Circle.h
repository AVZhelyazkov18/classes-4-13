#pragma once


class Circle {
public: 
	void setRadius(double newRadius);
	double getDiameter();
	double getArea();
	double getCircumference();
	double getRadius();
private:
	double radius;
};
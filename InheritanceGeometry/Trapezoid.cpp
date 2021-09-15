#include "Trapezoid.h"

Trapezoid::Trapezoid(double base, double up, double height, double left, string name):
	base{ base }, up{ up }, height{ height }, left{ left }
{
	this->name = name;
	cornerCount = 4;

	if (left < height || left > sqrt(height * height + (base - up) + (base - up))) 
	{
		base = up = height = left = right = -1;
		P = S = -1;
		cout << "It`s not right" << endl;
		this->name = "udefined";
	}
	else
	{
		cout << "All right" << endl;
		recalculatePS_Right();
	}
}

void Trapezoid::recalculatePS_Right()
{
	double rightBase = base - up - (sqrt(left * left - height * height));
	right = sqrt(height * height + rightBase * rightBase);
	P = base + up + left + right;
	S = (base + up) / 2 * height;
}

void Trapezoid::displayTrap()
{
	cout << "Trapezoid: ";
	display();
	cout << "base = " << base << endl;
	cout << "up = " << up << endl;
	cout << "left = " << left << endl;
	cout << "right = " << right << endl;
	cout << "height = " << height << endl;
}

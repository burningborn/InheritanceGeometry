#pragma once

#include <iostream>

using namespace std;

class Figures
{
protected:
	string name;
	double P; // периметр
	double S; // площадь
	int cornerCount; // кол-во углов

public:
	Figures(double P, double S, int cornerCount, string name) :
		P{ P }, S{ S }, cornerCount{ cornerCount }, name{ name } {cout << "#1" << endl; }
	Figures() : Figures(-1, -1, -1, "undefined") { cout << "#2" << endl; }
	Figures(string name, int cornerCount) : Figures(-1, -1, cornerCount, name) { cout << "#3" << endl; }
	~Figures() {}

	// getters
	string getName() {
		return name;
	}
	double getP() {
		return P;
	}
	double getS() {
		return S;
	}
	int getCornerCount() {
		return cornerCount;
	}


	// setters

	// other methods
	void display();
};
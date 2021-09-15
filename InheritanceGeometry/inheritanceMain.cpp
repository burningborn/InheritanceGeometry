#include <iostream>
using namespace std;

#include "Figures.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"
#include "Trapezoid.h"

#define delimiter "\=========================================================\n\n"
#define middle_line "\*********************************************************\n"
//#define MUTE

void main()
{
	setlocale(LC_ALL, "Russian");

	cout << delimiter;

#ifdef MUTE
	// 1. Прямоугольник
	Rectangle rect(2, 4, "ABCD"), rect_2(3, 5, "EFGH");
	rect.displayRect(); cout << endl;
	cout << middle_line << endl;
	rect_2.displayRect(); cout << endl;
	cout << middle_line << endl;
	rect.set_ab(1.4, 2.5);
	rect.displayRect();
	cout << "\n" << delimiter;

	// 2. Круг
	Circle crl(5, "Pi_R");
	crl.displayCircle();
	cout << "\n" << middle_line << endl;
	crl.setR(7);
	crl.displayCircle();
	cout << "\n" << delimiter;

	// 3. Тругольник
	Triangle trgl(1.5, 2, 3, "IJK"), trgl_2(5, 8, 13, "IJK_2");
	trgl.displayTrgl();
	cout << middle_line << endl;
	trgl_2.displayTrgl();
	cout << "\n" << delimiter;

#endif // MUTE

	Trapezoid tr(7.5, 5.1, 2.5, 3, "ABCD");
	tr.displayTrap();
	cout << delimiter;
	tr.setBase(9.9);
	tr.displayTrap();
	
}
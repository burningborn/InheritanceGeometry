#pragma once
#include "Figures.h"

class Trapezoid :
    public Figures
{
private:
    double base; //Основание
    double up; // Верх
    double height; // Высота
    double left; // Левая сторрона
    double right; //Правая сторона

public:
    Trapezoid(double base, double up, double height, double left, string name);
     
    ~Trapezoid(){}

    void recalculatePS_Right();

    //setters
    void setBase(double base) {
        this->base = base;
        recalculatePS_Right();
    }
    void setUp(double up) {
        this->up = up;
        recalculatePS_Right();
    }
    void setHeight(double height) {
        this->height = height;
        recalculatePS_Right();
    }

    void displayTrap();
};


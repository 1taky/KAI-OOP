#pragma once

#include "Figure.h"

class Rhombus : public Figure {
public:
    Rhombus();

    Rhombus(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4);

    Rhombus(const Rhombus& other);

    double GetSideLength() const;

    double GetPerimeter() const;

    double GetArea() const;
};

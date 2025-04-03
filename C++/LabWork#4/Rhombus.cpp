#include "Rhombus.h"

Rhombus::Rhombus() : Figure() {}

Rhombus::Rhombus(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
  : Figure(x1, y1, x2, y2, x3, y3, x4, y4) {}

Rhombus::Rhombus(const Rhombus& other) : Figure(other) {}

double Rhombus::GetSideLength() const {
  return GetDistance(x1, y1, x2, y2);
}

double Rhombus::GetPerimeter() const {
  return 4 * GetSideLength();
}

double Rhombus::GetArea() const {
  double d1 = GetDistance(x1, y1, x3, y3);
  double d2 = GetDistance(x2, y2, x4, y4);
  return (d1 * d2) / 2;
}

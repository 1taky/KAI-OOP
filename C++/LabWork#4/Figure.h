#pragma once

#include <cmath>

class Figure {
protected:
  double x1, y1, x2, y2, x3, y3, x4, y4;

public:
  Figure();

  Figure(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4);

  Figure(const Figure& other);

protected:
  double GetDistance(double ax, double ay, double bx, double by) const;
};

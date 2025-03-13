#pragma once

#include <iostream>
#include <cmath>

class TrapezoidOperations {
private:
  struct Point {
    double X, Y;
  };

  Point A, B, C, D;

  double distanceBetweenPoints(const Point& p1, const Point& p2) const;

public:
  TrapezoidOperations();
  TrapezoidOperations(Point a, Point b, Point c, Point d);
  TrapezoidOperations(const TrapezoidOperations& other);

  double getArea() const;
  double getPerimeter() const;
  void printCoordinates() const;

  TrapezoidOperations operator-() const;
  TrapezoidOperations operator*(const TrapezoidOperations& other) const;
};


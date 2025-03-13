#include "TrapezoidOperations.h"

TrapezoidOperations::TrapezoidOperations() {
  A = { 0, 0 };
  B = { 4, 0 };
  C = { 3, 2 };
  D = { 1, 2 };
}

TrapezoidOperations::TrapezoidOperations(Point a, Point b, Point c, Point d) : A(a), B(b), C(c), D(d) {}

TrapezoidOperations::TrapezoidOperations(const TrapezoidOperations& other) : A(other.A), B(other.B), C(other.C), D(other.D) {}

double TrapezoidOperations::getArea() const {
  double h = std::abs(C.Y - A.Y);
  double ab = std::abs(B.X - A.X);
  double cd = std::abs(C.X - D.X);
  return 0.5 * (ab + cd) * h;
}

double TrapezoidOperations::getPerimeter() const {
  return distanceBetweenPoints(A, B) + distanceBetweenPoints(B, C) + distanceBetweenPoints(C, D) + distanceBetweenPoints(D, A);
}

double TrapezoidOperations::distanceBetweenPoints(const Point& p1, const Point& p2) const {
  return std::sqrt(std::pow(p2.X - p1.X, 2) + std::pow(p2.Y - p1.Y, 2));
}

TrapezoidOperations TrapezoidOperations::operator-() const {
  return TrapezoidOperations(
    { A.X - 3, A.Y - 3 },
    { B.X - 3, B.Y - 3 },
    { C.X - 3, C.Y - 3 },
    { D.X - 3, D.Y - 3 }
  );
}

TrapezoidOperations TrapezoidOperations::operator*(const TrapezoidOperations& other) const {
  return TrapezoidOperations(
    { A.X * other.A.X, A.Y * other.A.Y },
    { B.X * other.B.X, B.Y * other.B.Y },
    { C.X * other.C.X, C.Y * other.C.Y },
    { D.X * other.D.X, D.Y * other.D.Y }
  );
}

void TrapezoidOperations::printCoordinates() const {
  std::cout << "A: (" << A.X << ", " << A.Y << ")" << std::endl;
  std::cout << "B: (" << B.X << ", " << B.Y << ")" << std::endl;
  std::cout << "C: (" << C.X << ", " << C.Y << ")" << std::endl;
  std::cout << "D: (" << D.X << ", " << D.Y << ")" << std::endl;
}

#include "Figure.h"

Figure::Figure()
  : x1(0), y1(0), x2(1), y2(1), x3(2), y3(0), x4(1), y4(-1) {
}

Figure::Figure(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
  : x1(x1), y1(y1), x2(x2), y2(y2), x3(x3), y3(y3), x4(x4), y4(y4) {
}

Figure::Figure(const Figure& other)
  : x1(other.x1), y1(other.y1), x2(other.x2), y2(other.y2),
  x3(other.x3), y3(other.y3), x4(other.x4), y4(other.y4) {
}

double Figure::GetDistance(double ax, double ay, double bx, double by) const {
  return std::sqrt(std::pow(bx - ax, 2) + std::pow(by - ay, 2));
}

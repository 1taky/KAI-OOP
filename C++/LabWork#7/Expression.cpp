#include "Expression.h"

double Expression::calculateLog() {
  if (A <= 0 || B <= 0)
    throw std::invalid_argument("Аргументи логарифма повинні бути більші за 0.");
  return std::log(A / B);
}

Expression::Expression(double a, double b, double c, double d) {
  setValues(a, b, c, d);
}

Expression::Expression() {
  setValues(1, 1, 1, 1);
}

void Expression::setValues(double a, double b, double c, double d) {
  A = a;
  B = b;
  C = c;
  D = d;
}

double Expression::calculateExpression() {
  double numerator = 4 * calculateLog() + 1;
  double denominator = C + B - D + A;
  if (denominator == 0)
    throw std::domain_error("Знаменник дорівнює нулю.");
  return numerator / denominator;
}

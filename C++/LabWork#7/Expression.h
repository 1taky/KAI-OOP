#pragma once

#include <cmath>
#include <stdexcept>

class Expression {
private:
  double A;
  double B;
  double C;
  double D;

  double calculateLog();

public:
  Expression(double a, double b, double c, double d);
  Expression();
  void setValues(double a, double b, double c, double d);
  double calculateExpression();
};

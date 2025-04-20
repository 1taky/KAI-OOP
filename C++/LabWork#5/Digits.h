#pragma once
#include "Row.h"

class Digits : public Row {
public:
  Digits(std::string val);
  void reduce() override;
};

#pragma once
#include "Row.h"

class Symbols : public Row {
public:
  Symbols(std::string val);
  void reduce() override;
};

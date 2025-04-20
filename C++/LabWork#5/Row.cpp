#include "Row.h"

Row::Row(std::string val) {
  value = val;
}

int Row::length() {
  return value.length();
}

std::string Row::getValue() {
  return value;
}

#include "Symbols.h"

Symbols::Symbols(std::string val) : Row(val) {}

void Symbols::reduce() {
  std::string temp = "";
  for (int i = 0; i < value.size(); i++) {
    if (i % 2 == 0)
      temp += value[i];
  }
  value = temp;
}

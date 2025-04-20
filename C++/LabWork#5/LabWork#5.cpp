#include <iostream>
#include "row.h"
#include "symbols.h"
#include "digits.h"

void printRow(Row& row) {
  std::cout << "Value before: " << row.getValue() << std::endl;
  std::cout << "Length before: " << row.length() << std::endl;
  row.reduce(); 
  std::cout << "Value after: " << row.getValue() << std::endl;
  std::cout << "Length after: " << row.length() << std::endl;
}

int main() {
  Symbols symb("abcdef");
  Digits dig("123456");

  printRow(symb);
  printRow(dig);

  return 0;
}

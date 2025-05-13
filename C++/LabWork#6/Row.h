#pragma once
#include <string>

class Row {
private:
  std::string value;

public:
  Row(std::string text);
  int countChar(char c);
  int length();
  void replace(std::string oldSub, std::string newSub);
  std::string getValue() const;
};

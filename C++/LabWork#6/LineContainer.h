#pragma once
#include "Row.h"
#include <vector>
#include <string>

class LineContainer {
private:
  std::vector<Row> lines;

public:
  void addLine(std::string text);
  void removeLine(std::string text);
  void clearText();
  int charFrequency(char c);
  int length();
  void replaceSubstring(std::string oldSub, std::string newSub);
  void removeDuplicates();
  std::string showAllLines();
};

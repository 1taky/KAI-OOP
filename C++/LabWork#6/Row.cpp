#include "Row.h"

Row::Row(std::string text) {
  value = text;
}

int Row::countChar(char c) {
  int count = 0;
  for (char ch : value) {
    if (ch == c) count++;
  }
  return count;
}

int Row::length() {
  return value.length();
}

void Row::replace(std::string oldSub, std::string newSub) {
  size_t pos = 0;
  while ((pos = value.find(oldSub, pos)) != std::string::npos) {
    value.replace(pos, oldSub.length(), newSub);
    pos += newSub.length();
  }
}

std::string Row::getValue() const {
  return value;
}

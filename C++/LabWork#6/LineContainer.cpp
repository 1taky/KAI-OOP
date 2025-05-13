#include "LineContainer.h"

void LineContainer::addLine(std::string text) {
  lines.push_back(Row(text));
}

void LineContainer::removeLine(std::string text) {
  for (size_t i = 0; i < lines.size(); ++i) {
    if (lines[i].getValue() == text) {
      lines.erase(lines.begin() + i);
      break;
    }
  }
}

void LineContainer::clearText() {
  lines.clear();
}

int LineContainer::charFrequency(char c) {
  int count = 0;
  for (Row& line : lines) {
    count += line.countChar(c);
  }
  return count;
}

int LineContainer::length() {
  int total = 0;
  for (Row& line : lines) {
    total += line.length();
  }
  return total;
}

void LineContainer::replaceSubstring(std::string oldSub, std::string newSub) {
  for (Row& line : lines) {
    line.replace(oldSub, newSub);
  }
}

void LineContainer::removeDuplicates() {
  for (size_t i = 0; i < lines.size(); ++i) {
    for (size_t j = i + 1; j < lines.size(); ) {
      if (lines[i].getValue() == lines[j].getValue()) {
        lines.erase(lines.begin() + j);
      }
      else {
        ++j;
      }
    }
  }
}

std::string LineContainer::showAllLines() {
  std::string result;
  for (Row& line : lines) {
    result += line.getValue() + " ";
  }
  return result;
}

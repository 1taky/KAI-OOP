#pragma once
#include <string>

class Row {
protected:
  std::string value;
public:
  Row(std::string val);
  virtual int length();
  virtual void reduce() = 0;
  std::string getValue();
};

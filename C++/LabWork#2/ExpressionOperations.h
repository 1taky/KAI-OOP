#pragma once
#ifndef EXPRESSIONOPERATIONS_H
#define EXPRESSIONOPERATIONS_H

#include <string>

class ExpressionOperations {
private:
  std::string text;

public:
  ExpressionOperations();
  ExpressionOperations(std::string input);
  ExpressionOperations(const ExpressionOperations& obj);
  ~ExpressionOperations();

  std::string expressionToUpper();
  std::string getText();
  int calculateExpressionLength();
  std::string replaceChars(char oldChar, char newChar);
};

#endif


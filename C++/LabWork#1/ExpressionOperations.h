#pragma once
#ifndef EXPRESSIONOPERATIONS_H
#define EXPRESSIONOPERATIONS_H

#include <string>

using namespace std;

class ExpressionOperations {
private:
  string text;

public:
  
  ExpressionOperations(string input);

  string GetText() const;

  int CalculateExpressionLength() const;

  string ReplaceChars(char oldChar, char newChar);
};

#endif

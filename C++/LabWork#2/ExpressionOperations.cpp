#include "ExpressionOperations.h"
#include <algorithm>

ExpressionOperations::ExpressionOperations() {
  text = "";
}

ExpressionOperations::ExpressionOperations(std::string input) {
  text = input;
}

ExpressionOperations::ExpressionOperations(const ExpressionOperations& obj) {
  text = obj.text;
}

ExpressionOperations::~ExpressionOperations() {
}

std::string ExpressionOperations::expressionToUpper() {
  std::transform(text.begin(), text.end(), text.begin(), ::toupper);
  return text;
}

std::string ExpressionOperations::getText() {
  return text;
}

int ExpressionOperations::calculateExpressionLength() {
  return text.length();
}

std::string ExpressionOperations::replaceChars(char oldChar, char newChar) {
  std::string result = text;
  std::replace(result.begin(), result.end(), oldChar, newChar);
  return result;
}


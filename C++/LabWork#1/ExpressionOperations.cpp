#include "ExpressionOperations.h"
#include <algorithm>

using namespace std;

ExpressionOperations::ExpressionOperations(string input) {
  text = input;
  
  transform(text.begin(), text.end(), text.begin(), ::toupper);
}

string ExpressionOperations::GetText() const {
  return text;
}

int ExpressionOperations::CalculateExpressionLength() const{
  return text.length();
}

string ExpressionOperations::ReplaceChars(char oldChar, char newChar) {
  string result = text;
  replace(result.begin(), result.end(), oldChar, newChar);
  return result;
}

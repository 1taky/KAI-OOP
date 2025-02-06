#include <iostream>
#include <string>
#include "ExpressionOperations.h"

using namespace std;

int main() {
  string userInput;
  char oldChar, newChar;

  cout << "Enter the expression: ";
  getline(cin, userInput);

  cout << "What symbol to change: ";
  cin >> oldChar;

  cout << "At what symbol: ";
  cin >> newChar;

  ExpressionOperations expression(userInput);

  cout << "Expression with uppercase: " << expression.GetText() << endl;
  cout << "Expression length = " << expression.CalculateExpressionLength() << endl;
  cout << "Expression with changed chars: " << expression.ReplaceChars(oldChar, newChar) << endl;

  return 0;
}

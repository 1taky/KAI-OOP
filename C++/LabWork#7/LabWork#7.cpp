#include <iostream>
#include <vector>
#include "Expression.h"

int main() {
  system("chcp 65001");
  std::vector<Expression> expressions = {
      Expression(4, 2, 3, 1),
      Expression(5, 1, 2, 8),
      Expression(),
      Expression(-1, 2, 3, 1), // помилка логарифма
      Expression(2, 2, -4, 0) // помилка ділення на нуль
  };

  for (size_t i = 0; i < expressions.size(); ++i) {
    try {
      double result = expressions[i].calculateExpression();
      std::cout << "Результат " << i + 1 << ": " << result << std::endl;
    }
    catch (const std::exception& ex) {
      std::cout << "Помилка у виразі " << i + 1 << ": " << ex.what() << std::endl;
    }
  }

  return 0;
}

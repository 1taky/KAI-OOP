#include <iostream>
#include "LineContainer.h"

int main() {
  system("chcp 65001"); // зміна кодировки перед виведенням основної інформації
  LineContainer container;

  container.addLine("hello");
  container.addLine("world");
  container.addLine("hello");
  container.addLine("test");
  container.addLine("example");

  std::cout << "Усі рядки:\n" << container.showAllLines() << "\n";

  std::cout << "\nЧастота символа 'l': " << container.charFrequency('l') << "\n";
  std::cout << "Загальна кількість символів: " << container.length() << "\n";

  container.replaceSubstring("lo", "xx");
  std::cout << "\nПісля заміни 'lo' на 'xx':\n" << container.showAllLines() << "\n";

  container.removeDuplicates();
  std::cout << "\nПісля видалення дублікатів:\n" << container.showAllLines() << "\n";

  return 0;
}

#include <iostream>
#include "TrapezoidOperations.h"

int main() {
  TrapezoidOperations TR1;
  TrapezoidOperations TR2({ 2, 3 }, { 6, 3 }, { 5, 5 }, { 3, 5 });
  TrapezoidOperations TR3(TR2);

  std::cout << "Coordinates of TR3:" << std::endl;
  TR3.printCoordinates();

  TR3 = -TR3;
  std::cout << "TR3 coordinates after subtraction:" << std::endl;
  TR3.printCoordinates();

  std::cout << "Coordinates before:" << std::endl;
  TR1.printCoordinates();

  TR1 = TR2 * TR3;
  std::cout << "TR1 coordinates after multiplying TR2 & TR3:" << std::endl;
  TR1.printCoordinates();

  std::cout << "TR1 area: " << TR1.getArea() << std::endl;
  std::cout << "TR1 perimeter: " << TR1.getPerimeter() << std::endl;

  return 0;
}

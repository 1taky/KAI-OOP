#include <iostream>
#include "Rhombus.h"

int main() {
  Rhombus rhombus1;
  std::cout << "Rhombus side: " << rhombus1.GetSideLength() << std::endl;
  std::cout << "Rhombus square: " << rhombus1.GetArea() << std::endl;
  std::cout << "Rhombus perimeter: " << rhombus1.GetPerimeter() << std::endl;
  std::cout << std::endl;

  Rhombus rhombus2(0, 0, 4, 3, 8, 0, 4, -3);
  std::cout << "Rhombus side: " << rhombus2.GetSideLength() << std::endl;
  std::cout << "Rhombus square: " << rhombus2.GetArea() << std::endl;
  std::cout << "Rhombus perimeter: " << rhombus2.GetPerimeter() << std::endl;
  std::cout << std::endl;

  Rhombus rhombus3 = rhombus2;
  std::cout << "Rhombus side: " << rhombus3.GetSideLength() << std::endl;
  std::cout << "Rhombus square: " << rhombus3.GetArea() << std::endl;
  std::cout << "Rhombus perimeter: " << rhombus3.GetPerimeter() << std::endl;
  std::cout << std::endl;

  return 0;
}

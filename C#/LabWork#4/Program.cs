using System;

namespace LabWork_4
{
  class Program
  {
    static void Main()
    {
      Rhombus rhombus1 = new Rhombus();
      Console.WriteLine("Rhombus side: " + rhombus1.GetSideLength());
      Console.WriteLine("Rhombus square: " + rhombus1.GetArea());
      Console.WriteLine("Rhombus perimeter: " + rhombus1.GetPerimeter());
      Console.WriteLine();

      Rhombus rhombus2 = new Rhombus(0, 0, 4, 3, 8, 0, 4, -3);
      Console.WriteLine("Rhombus side: " + rhombus2.GetSideLength());
      Console.WriteLine("Rhombus square: " + rhombus2.GetArea());
      Console.WriteLine("Rhombus perimeter: " + rhombus2.GetPerimeter());
      Console.WriteLine();

      Rhombus rhombus3 = new Rhombus(rhombus2);
      Console.WriteLine("Rhombus side: " + rhombus3.GetSideLength());
      Console.WriteLine("Rhombus square: " + rhombus3.GetArea());
      Console.WriteLine("Rhombus perimeter: " + rhombus3.GetPerimeter());
      Console.WriteLine();
    }
  }

}

using System;

class Program
{
  static void Main()
  {
    TrapezoidOperations TR1 = new TrapezoidOperations();
    TrapezoidOperations TR2 = new TrapezoidOperations((2, 3), (6, 3), (5, 5), (3, 5));
    TrapezoidOperations TR3 = new TrapezoidOperations(TR2);

    Console.WriteLine("Coordinates of TR3:");
    TR3.PrintCoordinates();

    TR3 = -TR3;
    Console.WriteLine("TR3 coordinates after substraction:");
    TR3.PrintCoordinates();

    Console.WriteLine("Coordinates before:");
    TR1.PrintCoordinates();

    TR1 = TR2 * TR3;
    Console.WriteLine("TR1 coordinates after implementation TR2 & TR3:");
    TR1.PrintCoordinates();

    Console.WriteLine($"TR1 area: {TR1.GetArea()}");
    Console.WriteLine($"TR1 perimeter: {TR1.GetPerimeter()}");
  }
}

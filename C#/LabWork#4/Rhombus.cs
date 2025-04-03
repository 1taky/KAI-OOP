using System;

namespace LabWork_4
{
  class Rhombus : Figure
  {
    public Rhombus() : base() { }

    public Rhombus(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
        : base(x1, y1, x2, y2, x3, y3, x4, y4) { }

    public Rhombus(Rhombus other) : base(other) { }

    public double GetSideLength()
    {
      return GetDistance(x1, y1, x2, y2);
    }

    public double GetPerimeter()
    {
      return 4 * GetSideLength();
    }

    public double GetArea()
    {
      double d1 = GetDistance(x1, y1, x3, y3);
      double d2 = GetDistance(x2, y2, x4, y4);
      return ((d1 * d2) / 2);
    }
  }
}

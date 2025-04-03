using System;

public class TrapezoidOperations
{
  private (double X, double Y) _a;
  private (double X, double Y) _b;
  private (double X, double Y) _c;
  private (double X, double Y) _d;

  public TrapezoidOperations()
  {
    _a = (0, 0);
    _b = (4, 0);
    _c = (3, 2);
    _d = (1, 2);
  }

  public TrapezoidOperations((double, double) a, (double, double) b, (double, double) c, (double, double) d)
  {
    _a = a;
    _b = b;
    _c = c;
    _d = d;
  }

  public TrapezoidOperations(TrapezoidOperations otherTr)
  {
    _a = otherTr._a;
    _b = otherTr._b;
    _c = otherTr._c;
    _d = otherTr._d;
  }

  public double GetArea()
  {
    double h = Math.Abs(_c.Y - _a.Y);
    double ab = Math.Abs(_b.X - _a.X);
    double cd = Math.Abs(_c.X - _d.X);
    return 0.5 * (ab + cd) * h;
  }

  public double GetPerimeter()
  {
    return DistanceBetweenPoints(_a, _b) + DistanceBetweenPoints(_b, _c) + DistanceBetweenPoints(_c, _d) + DistanceBetweenPoints(_d, _a);
  }

  private double DistanceBetweenPoints((double X, double Y) p1, (double X, double Y) p2)
  {
    return Math.Sqrt(Math.Pow(p2.X - p1.X, 2) + Math.Pow(p2.Y - p1.Y, 2));
  }

  public TrapezoidOperations operator -(TrapezoidOperations t)
  {
    return new TrapezoidOperations(
        (t._a.X - 3, t._a.Y - 3),
        (t._b.X - 3, t._b.Y - 3),
        (t._c.X - 3, t._c.Y - 3),
        (t._d.X - 3, t._d.Y - 3)
    );
  }

  public TrapezoidOperations operator *(TrapezoidOperations t1, TrapezoidOperations t2)
  {
    return new TrapezoidOperations(
        (t1._a.X * t2._a.X, t1._a.Y * t2._a.Y),
        (t1._b.X * t2._b.X, t1._b.Y * t2._b.Y),
        (t1._c.X * t2._c.X, t1._c.Y * t2._c.Y),
        (t1._d.X * t2._d.X, t1._d.Y * t2._d.Y)
    );
  }
  public void PrintCoordinates()
  {
    Console.WriteLine($"A: ({_a.X}, {_a.Y})");
    Console.WriteLine($"B: ({_b.X}, {_b.Y})");
    Console.WriteLine($"C: ({_c.X}, {_c.Y})");
    Console.WriteLine($"D: ({_d.X}, {_d.Y})");
  }
}

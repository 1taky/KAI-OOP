using LabWork_5;
using System;

class Program
{
  static void PrintRow(Row row)
  {
    Console.WriteLine("Value before: " + row.GetValue());
    Console.WriteLine("Length before: " + row.Length());
    row.Reduce();
    Console.WriteLine("Value after: " + row.GetValue());
    Console.WriteLine("Length after: " + row.Length());
  }

  static void Main()
  {
    Symbols symb = new Symbols("abcdef");
    Digits dig = new Digits("123456");

    PrintRow(symb);
    PrintRow(dig);
  }
}

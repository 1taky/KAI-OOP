using System;
using LabWork_1;

namespace MyLabWorkOne
{

  class Program
  {
    static void Main(string[] args)
    {
      Console.Write("Enter the expression: ");
      string userInput = Console.ReadLine();

      Console.WriteLine("What symbols to change: ");
      char oldChar = Console.ReadKey().KeyChar;

      Console.WriteLine("At what symbol: ");
      char newChar = Console.ReadKey().KeyChar;


      ExpressionOperations expression = new ExpressionOperations(userInput);

      Console.WriteLine($"Expression with uppercase: {expression.GetText()}");
      Console.WriteLine($"Expression length = {expression.CalculateExpressionLength()}");
      Console.WriteLine($"Expression with changed chars: {expression.ReplaceChars(oldChar, newChar)}");
    }
  }
}

//using LabWork_2;
//namespace MyLabWork

namespace LabWork_2
{

  class Program
  {
    static void Main(string[] args)
    {
      Console.Write("Enter the expression: ");
      string userInput = Console.ReadLine();

      Console.Write("What symbols to change: ");
      char oldChar = Console.ReadKey().KeyChar;
      Console.WriteLine();

      Console.Write("At what symbol: ");
      char newChar = Console.ReadKey().KeyChar;
      Console.WriteLine();


      ExpressionOperations expression = new ExpressionOperations(userInput);

      Console.WriteLine($"Expression with uppercase: {expression.GetText()}");
      Console.WriteLine($"Expression length = {expression.CalculateExpressionLength()}");
      Console.WriteLine($"Expression with changed chars: {expression.ReplaceChars(oldChar, newChar)}");



      //Test

      //ExpressionOperations expression1 = new ExpressionOperations();
      //Console.WriteLine(expression1.GetText());

      //ExpressionOperations expression2 = new ExpressionOperations(userInput);
      //Console.WriteLine(expression2.GetText());

      //ExpressionOperations expression3 = new ExpressionOperations(expression1);
      //Console.WriteLine(expression3.GetText());

    }
  }
}

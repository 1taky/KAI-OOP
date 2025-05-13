using System;
using ExpressionLibrary;

namespace ExpressionApp
{
    class Program
    {
        static void Main()
        {
            Expression[] expressions = new Expression[]
            {
                new Expression(4, 2, 3, 1),
                new Expression(5, 1, 2, 8),
                new Expression(),
                new Expression(-1, 2, 3, 1), // помилка логарифма
                new Expression(2, 2, -4, 0), // помилка ділення на нуль
            };

            for (int i = 0; i < expressions.Length; i++)
            {
                try
                {
                    double result = expressions[i].CalculateExpression();
                    Console.WriteLine($"Результат {i + 1}: {result:F4}");
                }
                catch (Exception ex)
                {
                    Console.WriteLine($"Помилка у виразі {i + 1}: {ex.Message}");
                }
            }
        }
    }
}

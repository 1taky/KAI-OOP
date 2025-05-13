using System;
using System.Linq;
using System.Text;

namespace LabWork_6
{
  public class Program
  {
    static void Main()
    {
      Console.OutputEncoding = Encoding.UTF8;
      LineContainer container = new LineContainer();

      container.AddLine("hello");
      container.AddLine("world");
      container.AddLine("hello");
      container.AddLine("test");
      container.AddLine("example");

      Console.WriteLine("Усі рядки:");
      Console.WriteLine(container.ShowAllLines());

      Console.WriteLine($"\nЧастота символа 'l' - {container.CharFrequency('l')} і загальна кількість символів - {container.Length()}");

      container.ReplaceSubstring("lo", "xx");
      Console.WriteLine("\nПісля заміни 'lo' на 'xx':");
      Console.WriteLine(container.ShowAllLines());

      container.RemoveDuplicates();
      Console.WriteLine("\nПісля видалення дублікатів:");
      Console.WriteLine(container.ShowAllLines());
    }
  }
}

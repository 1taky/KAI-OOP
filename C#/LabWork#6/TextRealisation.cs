using System;
using System.Linq;

namespace LabWork_6
{
    public interface DuplicateRowsInterface
    {
      void RemoveDuplicates();
    }

    public class Row
    {
      public string value { get; set; }

      public Row(string text)
      {
        value = text;
      }

      public int CountChar(char c)
      {
        return value.Count(ch => ch == c);
      }

      public int Length()
      {
        return value.Length;
      }

      public void Replace(string oldSub, string newSub)
      {
        value = value.Replace(oldSub, newSub);
      }
    }

    public class LineContainer : DuplicateRowsInterface
    {
      private List<Row> lines = new List<Row>();

      public void AddLine(string text)
      {
        lines.Add(new Row(text));
      }

      public void RemoveLine(string text)
      {
        var toRemove = lines.FirstOrDefault(l => l.value == text);
        if (toRemove != null)
          lines.Remove(toRemove);
      }

      public void ClearText()
      {
        lines.Clear();
      }

      public double CharFrequency(char c)
      {
        int count = lines.Sum(l => l.CountChar(c));
        return count;
      }

      public int Length()
      {
        int totalChars = lines.Sum(l => l.Length());
        return totalChars;
      }

      public void ReplaceSubstring(string oldSub, string newSub)
      {
        foreach (var line in lines)
        {
          line.Replace(oldSub, newSub);
        }
      }

      public void RemoveDuplicates()
      {
        lines = lines
            .GroupBy(l => l.value)
            .Select(g => g.First())
            .ToList();
      }

      public string ShowAllLines()
      {
      string result = "";

      foreach (var line in lines)
      {
        result += line.value + " ";
      }

      return result;
      }
    }
}

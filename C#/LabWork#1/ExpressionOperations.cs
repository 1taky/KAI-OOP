using System;

namespace LabWork_1
{
  public class ExpressionOperations
  {
    private string text;

    public ExpressionOperations(string input)
    {
      text = input.ToUpper();
    }
    public string GetText()
    {
      return text;
    }
    public int CalculateExpressionLength()
    {
      return text.Length;
    }
    public string ReplaceChars(char oldChar, char newChar) {

      return text.Replace(oldChar, newChar);

    }
  }
}

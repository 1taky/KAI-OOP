using System;

namespace LabWork_2
{
  public class ExpressionOperations
  {
    private string text;

    public ExpressionOperations()
    {
      text = "";
    }

    public ExpressionOperations(string input)
    {
      text = input;
    }

    public ExpressionOperations(ExpressionOperations anotherObj)
    {
      text = anotherObj.text;
    }

    ~ExpressionOperations()
    {
    }

    public string expressionToUpper()
    {
      return text.ToUpper();
    }

    public string GetText()
    {
      return expressionToUpper();
    }

    public int CalculateExpressionLength()
    {
      return text.Length;
    }

    public string ReplaceChars(char oldChar, char newChar)
    {
      return text.Replace(oldChar, newChar).ToUpper();
    }
  }
}

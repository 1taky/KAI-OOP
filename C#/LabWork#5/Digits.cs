using System;


namespace LabWork_5
{
  public class Digits : Row
  {
    public Digits(string val) : base(val) { }

    public override void Reduce()
    {
      string temp = "";
      for (int i = 0; i < value.Length; i++)
      {
        if (i % 2 != 0)
          temp += value[i];
      }
      value = temp;
    }
  }


}

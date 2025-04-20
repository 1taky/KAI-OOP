using System;


namespace LabWork_5
{
  public abstract class Row
  {
    protected string value;

    public Row(string val)
    {
      value = val;
    }

    public virtual int Length()
    {
      return value.Length;
    }

    public string GetValue()
    {
      return value;
    }

    public abstract void Reduce();
  }

}

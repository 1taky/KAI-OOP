using System;

namespace ExpressionLibrary
{
    public class Expression
    {
        public double A { get;  private set; }
        public double B { get;  private set; }
        public double C { get;  private set; }
        public double D { get;  private set; }
        

        public Expression(double a, double b, double c, double d)
        {
            SetValues(a, b, c, d);
        }

        public Expression()
        {
            SetValues(1, 1, 1, 1);
        }

        public void SetValues(double a, double b, double c, double d)
        {
            A = a;
            B = b;
            C = c;
            D = d;
        }

        private double CalculateLog()
        {
            if (A <= 0 || B <= 0)
                throw new ArgumentException("Аргументи логарифма повинні бути більші за 0.");

            return Math.Log(A / B);
        }

        public double CalculateExpression()
        {
            double numerator = 4 * CalculateLog() + 1;
            
            double denominator = C + B - D + A;
            if (denominator == 0)
                throw new DivideByZeroException("Знаменник дорівнює нулю.");

            return numerator / denominator;
        }
    }
}

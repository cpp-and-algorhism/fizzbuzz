using System;
public class FizzBuzz
{
    static public void Main()
    {
        var sw = new System.Diagnostics.Stopwatch();
        sw.Start();
        int max = 1000000;
        for (int i = 1; i <= max; ++i)
        {
            bool fizz = false;
            bool buzz = false;
            if (i % 3 == 0)
            {
                fizz = true;
            };
            if (i % 5 == 0)
            {
                buzz = true;
            };
            if (fizz && buzz)
            {
                Console.WriteLine("fizzbuzz");
            }
            else if (fizz)
            {

                Console.WriteLine("fizz");
            }
            else if (buzz)
            {
                Console.WriteLine("buzz");
            }
            else
            {
                Console.WriteLine(i);
            }
        }
        sw.Stop();
        TimeSpan ts = sw.Elapsed;
        ts = sw.Elapsed;
        Console.WriteLine($"　{ts}");
        Console.WriteLine($"　{sw.ElapsedMilliseconds}ミリ秒");

    }
}
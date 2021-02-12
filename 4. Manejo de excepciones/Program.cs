using System;

namespace model4
{
    class Program
    {
        public static double Seconds2Minutes(double minutes)
        {
            if (minutes == 0)
            {
                return 0;
            } else if (minutes > 0) 
            {
                return minutes / 60;
            } else {
                throw new ExampleException("Time can't be negative, stupid!");
            }
        }

        static void Main(string[] args)
        {
            Console.WriteLine("Escribe la cantidad de segundos que quieres convertir a minutos: ");
            string readed = Console.ReadLine();

            try
            {
                Console.WriteLine(double.Parse(readed) + " segundos son " + Seconds2Minutes(double.Parse(readed)) + " minutos.");
            }
            catch (ExampleException e)
            {
                Console.WriteLine(e.Message);
            }
        }
    }
}

using System;

namespace model
{
    class HEI
    {
        static void Main(string[] args)
        {
            IVaso vaso = new VasoDeChupitoDeCristal(0.01, 0.30);
            Console.WriteLine("Capacidad: " + vaso.getCapacity());
            Console.WriteLine("Peso: " + vaso.getWeight());
            if(vaso is ICrystalGlass) Console.WriteLine("El vaso es de cristal");
            else Console.WriteLine("El vaso no es de cristal");
        }
    }
}

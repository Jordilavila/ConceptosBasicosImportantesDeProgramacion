using System;

namespace model 
{
    class VasoDeChupitoDeCristal : AVaso, ICrystalGlass {
        public VasoDeChupitoDeCristal(double capacity, double weight) : base(ICrystalGlass.getMaterial(), capacity, weight, "Vaso de chupito")
        {
        }
    }

}
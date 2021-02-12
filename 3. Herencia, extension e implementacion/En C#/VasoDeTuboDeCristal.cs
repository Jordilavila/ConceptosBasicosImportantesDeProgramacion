using System;

namespace model 
{
    class VasoDeTuboDeCristal : AVaso, ICrystalGlass
    {
        public VasoDeTuboDeCristal(double capacity, double weight) : base(ICrystalGlass.getMaterial(), capacity, weight, "Vaso de tubo")
        {

        }
    }
}
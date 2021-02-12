package model;

public class VasoDeTuboDeCristal extends AVaso implements ICrystalGlass {

    public VasoDeTuboDeCristal(double capacity, double weight) {
        super(ICrystalGlass.material(), capacity, weight, "Tubo");
    }
    
}

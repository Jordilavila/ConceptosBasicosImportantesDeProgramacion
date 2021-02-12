package model;

public class VasoDeChupitoDeCristal extends AVaso implements ICrystalGlass {

    public VasoDeChupitoDeCristal(double capacity, double weight) {
        super(ICrystalGlass.material(), capacity, weight, "Vaso de chupito");
    }
    
}

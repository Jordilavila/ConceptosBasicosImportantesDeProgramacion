import model.ICrystalGlass;
import model.IVaso;
import model.VasoDeChupitoDeCristal;

public class HEI {
    public static void main(String[] args) throws Exception {
        System.out.println();
        IVaso vaso = new VasoDeChupitoDeCristal(0.01, 0.30);
        System.out.println("Capacidad: " + vaso.getCapacity());
        System.out.println("Peso: " + vaso.getWeight());
        if(vaso instanceof ICrystalGlass) System.out.println("El vaso es de cristal");
        else System.err.println("El vaso no es de cristal");
    }
}

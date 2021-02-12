package model;


/**
 * Esta es una clase abstracta, es decir, una clase que NO SE PUEDE INSTANCIAR.
 * Podríamos decir que es la clase que implementa a la interfaz y crea un objeto
 * genérico, del cual heredarán o EXTENDERÁN las clases finales.
 * 
 */
public abstract class AVaso implements IVaso {
    private String material;
    private double weight;
    private double capacity;
    private String typeOfGlass;

    public AVaso(String material, double capacity, double weight, String typeOfGlass) {
        this.material = material;
        this.capacity = capacity;
        this.weight = weight;
        this.typeOfGlass = typeOfGlass;
    }

    @Override
    public String getMaterial() {
        return this.material;
    }

    @Override
    public double getWeight() {
        return this.weight;
    }

    @Override
    public double getCapacity() {
        return this.capacity;
    }

    @Override
    public String getTypeOfGlass() {
        return this.typeOfGlass;
    }
}

#include <iostream>
using namespace std;

class Animal {
public:
    Animal() {
    }

    ~Animal() {
    }
    virtual void playSound() { cout << "No sound" << endl; }
    virtual int getNumberOfLegs() { return 0; }

    /*
     *  Una breve explicación:
     *  
     *  Esta clase implementa una clase base de un tipo de dato llamado Animal.
     * 
     *  ¿Qué es esto de VIRTUAL?
     *  Esto es un aspecto muy importante que sólo vamos a tocar en C++, pues en los demás lenguajes viene implementado por debajo. 
     *  En el POO un método virtual es una función cuyo comportamiendo lo determina una de las subclases o clases que heredan de la clase base,
     *  en este caso, será la clase Cat. Como podemos ver, el método playSound() imprimirá "Meow" y el getNumberOfLegs() devolverá 4.
     *  Si hiciésemos una clase Tarantula, el sonido sería "" y el número de piernas, 8.
     * 
     *  Cabe añadir que esto del VIRTUAL es una de las cosas más importantes en el polimorfismo. Con esto estaríamos viendo que cada objeto debe de hacer sus cosas,
     *  siguiendo así algo más cercano a un patrón de diseño SOLID (Single responsibility, Open-closed, Liskov substitution, Interface segregation and Dependency inversion).
     */
};

class Cat : public Animal {
private:
    int value; 
public:
    Cat() : Animal() {}
    Cat(int value) : Animal() {
        this->value = value;
    }
    ~Cat() {}

    void playSound() {
        cout << "Meaw" << endl;
    }

    int getNumberOfLegs() { return 4; }
};


int main() {
    // Con objetos declarados como la instancia.
    Cat cat;
    cat.playSound();
    cout << "Number of legs (Cat): " << cat.getNumberOfLegs() << endl;

    Animal animal;
    animal.playSound();
    cout << "Number of legs (Animal): " << animal.getNumberOfLegs() << endl;
    cout << endl;

    // Con objetos declarados en BASE e instanciados en la HERENCIA:
    Animal *catD = new Cat();
    catD->playSound();
    cout << "Number of legs (Cat): " << catD->getNumberOfLegs() << endl;

    Animal *animalD = new Animal();
    animalD->playSound();
    cout << "Number of legs (Animal): " << animalD->getNumberOfLegs() << endl;

    delete catD, animalD;
    return 0;
}
#include <iostream>

using namespace std;

void parte1_anexo1(int var) {
    var = 10;   // Valor
}

void parte1_anexo2(int *var) {
    *var = 10;  // Puntero
}

void parte1_anexo3(int &var) {
    var = 10;   // Referencia
}

void parte1_anexo4(int &a, int &b) {
    int aux = a;
    a = b;
    b = aux;
}

/**
 * En esta función vamos a ver como funciona la memoria y el uso de punteros.
 * Vamos a trabajar con una variable de tipo int.
 * 
 * Como podemos ver, la estaremos inicializando con el número 17.
 */
void parte1() {
    int variable = 17;  // Aquí estamos creando una variable entera cuyo nombre es variable. Además, la inicializamos con el valor 17
    variable = 15;      // Aquí le estamos asignando el número 15

    /*
     *  Automáticamente, esta variable necesita tiener un lugar físico en el sistema.
     *  Este lugar físico es la memoria RAM, pero ahora mismo no nos interesa saber cómo se guarda ahí dentro.
     *  
     *  Para entenderlo mejor, tenemos que imaginar que la memoria del ordenador es como un bloque de pisos, donde cada piso tiene su dirección:
     *      Piso 3, puerta D (por ejemplo)
     * 
     *  Ahora bien. ¿Sé puede saber qué dirección ocupa nuestra variable en la memoria del ordenador? Por supuesto.
     *  ¿Cómo? Con el uso de PUNTEROS
     * 
     *  Veámoslo:
     * 
     */

    cout << "Vamos a averiguar cosas sobre nuestra variable: " << endl;
    cout << "Valor que contiene: " << variable << endl;
    cout << "Dirección de memoria: " << &variable << endl;
    
    /*
     *  Por ahora esto no nos dice nada. Pero, imaginemos otra situación, ¿qué ocurre si llega el repartidor o la repartidora de una agencia de transportes a recoger nuestra cafetera, 
     *      que se nos ha roto, y a traernos la cafetera de cortesía?
     *  Este repartidor vendrá con una caja, que podemos entendera como el DATO o TIPO de dato. Y dentro de la caja, tendremos el contenido, la cafetera.
     *  Respectivamente, serían la dirección de memoria (CAJA) y el valor (CAFETERA), que con nuestra variable sería el valor 15.
     *  
     *  Esto nos lleva a las funciones con uso de PUNTEROS y a las funciones con uso de REFERENCIAS
     *  
     *  Vamos a ver como se modifica el valor de una dirección de memoria con los tres anexos a este método, que tendrán la misma implementación:
     * 
     */
    variable = 1;
    cout << "Valor actual de la variable: " << variable << endl;
    variable = 1;
    parte1_anexo1(variable);
    cout << "Valor tras anexo1: " << variable << endl;
    variable = 1;
    parte1_anexo2(&variable);
    cout << "Valor tras anexo2: " << variable << endl;
    variable = 1;
    parte1_anexo3(variable);
    cout << "Valor tras anexo3: " << variable << endl;

    /*
     *  Como se puede observar, sólo se modificarán los valores con los anexos 2 y 3, puesto que son un puntero y una referencia, respectivamente.
     *  
     *  La REFERENCIA es un concepto que se introdujo en C++, por lo tanto, si trabajamos con las librerias de C, no lo podremos usar.
     * 
     *  El uso de una referencia para el paso de valores a funciones, nos ayuda a simplificar el funcionamiento de los punteros pero no siempre lo podremos usar.
     * 
     *  Un ejemplo de uso sería el swapping de los valores de dos variables, veámos el ejemplo:
     * 
     *  Además, esto nos serviría para "devolver" más de una cosa en una función o método.
     */
    int a = 10, b = 20;
    cout << "A: " << a << " B: " << b << endl;
    parte1_anexo4(a, b);
    cout << "A: " << a << " B: " << b << endl;

}

int main() {
    
    parte1();

    return 0;
}

#include <iostream>
#include <list>
#include <vector>

using namespace std;

struct List {
    string name;
    vector<string> tareas;
};

void funcionamientoListasSTL() {
    list<string> lista;
    lista.push_back("Hola");
    lista.push_back(" qué ");
    lista.push_back("tal?");

    for(list<string>::iterator it = lista.begin(); it != lista.end(); it++) {
        cout << *it << endl;
    }
}

void funcionamientoVectoresSTL() {
    List lista;
    lista.name = "Lista 1";
    lista.tareas.push_back("Ejemplo");
    lista.tareas.push_back("interesante");    
    lista.tareas.push_back("de");    
    lista.tareas.push_back("vectores");
    lista.tareas.push_back("dinámicos");

    cout << "Vector size: " << lista.tareas.size() << endl;
    cout << "Vector capacity: " << lista.tareas.capacity() << endl << endl;

    cout << lista.name << endl;
    for (int i = 0; i < lista.tareas.size(); i++) {
        cout << lista.tareas[i] << " ";
    }
    cout << endl;
}

void funcionamientoVectoresEXTENDIDO() {
    vector<List> listaDeList;

    // Creando lista y añadiendo item
    List lista1;
    listaDeList.push_back(lista1);  // Añadimos al final
    listaDeList.back().name = "Lista 1";
    listaDeList.back().tareas.push_back("Item 1");

    // Creando lista y añadiendo item
    //lista1;
    //listaDeList.push_back(lista1);  // Añadimos al final
    //listaDeList.back().name = "Lista 1";
    //listaDeList.back().tareas.push_back("Item 1");
    
    // Comprobar existencia de una lista
    bool existe = false;
    string nombreBuscado = "Lista1";
    for(int i = 0; i < listaDeList.size() && !existe; i++) 
        if(listaDeList[i].name == nombreBuscado) 
            existe = true;
        
    if(existe) {
        cout << "Existe!" << endl;
    } else {
        cout << "No exite! La añadimos!" << endl;
        List nuevaLista;
        nuevaLista.name = nombreBuscado;
        listaDeList.push_back(nuevaLista);
    }
        
    // Imprimir toda la lista
    for(int i = 0; i < listaDeList.size(); i++) {
        cout << listaDeList[i].name << endl;
    }

    /* 
     * El tipo vector no controla el HASH, es decir, si el objeto existe. (El HASH es como el DNI)
     * Tampoco controla si hay algún contenido igual.
     */
}


int main() {
    funcionamientoListasSTL();
    funcionamientoVectoresSTL();
    funcionamientoVectoresEXTENDIDO();
    return 0;
}
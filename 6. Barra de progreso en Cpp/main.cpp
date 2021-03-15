#include <iostream>

void printBarra(int cantidad, const int seImprimiran) {
    for(int i = 0; i < seImprimiran; i++)
        if(i < cantidad)
            std::cout << "#";
        else
            std::cout << " ";
}

void printBarraDeProgreso(int n) {
    const int seImprimiran = 50;
    int impresos = 0;
    for(int i=0; i<n; i++) {
        system("clear");
        std::cout << "Progress bar:" << std::endl;
        std::cout << "[";
        int decimaParteDeIterador = n / seImprimiran;
        if(i % decimaParteDeIterador == 0) impresos++;
        printBarra(impresos, seImprimiran);
        std::cout << "]" << std::endl;
    }
}

int main() {
    printBarraDeProgreso(200);
    return 0;
}
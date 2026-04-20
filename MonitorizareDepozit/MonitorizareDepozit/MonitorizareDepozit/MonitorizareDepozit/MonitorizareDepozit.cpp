#include <iostream>
#include "Depozit.h"

int main() {
    Depozit d;

    try {
        d.adaugaProdus(Produs(1, "Laptop", 10, 2500, 5));
        d.adaugaProdus(Produs(2, "Mouse", 3, 50, 5));

        d.actualizeazaCantitate(1, -7);
        d.actualizeazaCantitate(2, -1);

        auto lista = d.produseSubPrag();

        std::cout << "Produse sub prag:\n";
        for (const auto& p : lista) {
            std::cout << p.getNume() << " - " << p.getCantitate() << " buc\n";
        }

    }
    catch (const std::exception& e) {
        std::cout << "Eroare: " << e.what() << std::endl;
    }

    return 0;
}
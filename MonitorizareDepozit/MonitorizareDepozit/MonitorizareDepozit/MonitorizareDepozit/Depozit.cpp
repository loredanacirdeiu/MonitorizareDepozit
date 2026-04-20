#include "Depozit.h"
#include <stdexcept>

void Depozit::adaugaProdus(const Produs& p) {
    if (produse.find(p.getId()) != produse.end())
        throw std::runtime_error("Produs deja existent!");
    produse.insert({ p.getId(), p });
}

void Depozit::eliminaProdus(int id) {
    if (produse.find(id) == produse.end())
        throw std::runtime_error("Produs inexistent!");
    produse.erase(id);
}

void Depozit::actualizeazaCantitate(int id, int delta) {
    if (produse.find(id) == produse.end())
        throw std::runtime_error("Produs inexistent!");

    if (delta >= 0)
        produse[id] += delta;
    else
        produse[id] -= (-delta);
}

std::vector<Produs> Depozit::produseSubPrag() const {
    std::vector<Produs> rezultat;

    for (const auto& pair : produse) {
        if (pair.second.getCantitate() < pair.second.getPrag())
            rezultat.push_back(pair.second);
    }

    return rezultat;
}
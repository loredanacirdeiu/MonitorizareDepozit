#ifndef DEPOZIT_H
#define DEPOZIT_H

#include <unordered_map>
#include <vector>
#include "Produs.h"

class Depozit {
private:
    std::unordered_map<int, Produs> produse;

public:
    void adaugaProdus(const Produs& p);
    void eliminaProdus(int id);
    void actualizeazaCantitate(int id, int delta);
    std::vector<Produs> produseSubPrag() const;
};

#endif

#include "Produs.h"

Produs::Produs() {
    id = 0;
    nume = "";
}

Produs::Produs(int id, const std::string& nume, int cantitate, double pret, int prag)
    : id(id), nume(nume), cantitate(cantitate), pret(pret), pragAlerta(prag) {
    if (cantitate < 0) throw std::runtime_error("Cantitate invalida");
}

int Produs::getId() const { return id; }
std::string Produs::getNume() const { return nume; }
int Produs::getCantitate() const { return cantitate; }
int Produs::getPrag() const { return pragAlerta; }

void Produs::setCantitate(int c) {
    if (c < 0) throw std::runtime_error("Cantitate negativa!");
    cantitate = c;
}

Produs& Produs::operator+=(int val) {
    if (val < 0) throw std::runtime_error("Valoare invalida");
    cantitate += val;
    return *this;
}

Produs& Produs::operator-=(int val) {
    if (val < 0 || cantitate - val < 0)
        throw std::runtime_error("Stoc insuficient!");
    cantitate -= val;
    return *this;
}
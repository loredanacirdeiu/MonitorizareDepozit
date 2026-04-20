#ifndef PRODUS_H
#define PRODUS_H

#include <string>
#include <stdexcept>

class Produs {
private:
    int id;
    std::string nume;
    int cantitate;
    double pret;
    int pragAlerta;

public:
    Produs();
    Produs(int id, const std::string& nume, int cantitate, double pret, int prag);

    int getId() const;
    std::string getNume() const;
    int getCantitate() const;
    int getPrag() const;

    void setCantitate(int c);

    Produs& operator+=(int val);
    Produs& operator-=(int val);
};

#endif
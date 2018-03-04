//
// Created by scavenger on 01.03.18.
//

#include "Kolo.h"

Kolo::Kolo(double r)
        : r(r) {
    std::cout << "Konstruktor Kola(" << r << ")" << std::endl;
}

double Kolo::GetR() const {
    return r;
}

void Kolo::SetR(double r) {
    this->r = r;
}

double Kolo::Pole() {

    return 3.14 * r * r;
}

double Kolo::Obwod() {
    return 2 * 3.14 * r;
}

void Kolo::Wypisz(std::ostream &out) const {
    out << "To jest Kolo " << this->r;
}

Kolo::~Kolo() {
    std::cout << "Destruktor Kola aktywowany XD";
}
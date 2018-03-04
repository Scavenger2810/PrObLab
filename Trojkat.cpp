//
// Created by scavenger on 01.03.18.
//

#include "Trojkat.h"
#include<cmath>

Trojkat::Trojkat(double a, double b, double c)
        : a(a), b(b), c(c) {
    std::cout << "Konstruktor Trojkata(" << a << "," << b << "," << c << ")" << std::endl;
}

double Trojkat::GetA() const {
    return a;
}

double Trojkat::GetB() const {
    return b;
}

double Trojkat::GetC() const {
    return c;
}

void Trojkat::SetA(double a) {
    this->a = a;
}

void Trojkat::SetB(double b) {
    this->b = b;
}

void Trojkat::SetC(double c) {
    this->c = c;
}

double Trojkat::Pole() {
    double p = 0.5 * (a + b + c);
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

double Trojkat::Obwod() {
    return this->a + this->b + this->c;
}

void Trojkat::Wypisz(std::ostream &out) const {
    out << "To jest Trojkat " << this->a << " " << this->b << " " << this->c;
}

Trojkat::~Trojkat() {
    std::cout << "Destruktor trojkata aktywowany XD";
}
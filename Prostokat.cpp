//
// Created by scavenger on 01.03.18.
//

#include "Prostokat.h"
#include <iostream>


using namespace std;


Prostokat::Prostokat(double a, double b)
        : a(a), b(b) {
    cout << "Konstruktor Prostokąta(" << a << "," << b << ")" << endl;
}

double Prostokat::GetA() const {
    return a;
}

double Prostokat::GetB() const {
    return b;
}

void Prostokat::SetA(double a) {
    this->a = a;
}

void Prostokat::SetB(double b) {
    this->b = b;
}

double Prostokat::Pole() {
    return (this->a) * (this->b);
}

double Prostokat::Obwod() {
    return 2 * (this->a) + 2 * (this->b);
}

void Prostokat::Wypisz(std::ostream &out) const {
    out << "To jest prostokat " << this->a << " " << this->b;
}

Prostokat::~Prostokat() {
    std::cout << "Destruktor aktywowany XD";
}
//
// Created by scavenger on 01.03.18.
//

#include "FiguraPlaska.h"

std::ostream &operator<<(std::ostream &os, const FiguraPlaska &figura) {
    figura.Wypisz(os);
    return os;
}

FiguraPlaska::~FiguraPlaska() {
}
//
// Created by scavenger on 01.03.18.
//
#include<iostream>

#ifndef CPROJECTS_FIGURAPLASKA_H
#define CPROJECTS_FIGURAPLASKA_H


class FiguraPlaska {

protected:

    friend std::ostream &operator<<(std::ostream &os, const FiguraPlaska &
    figura);

public:
    virtual void Wypisz(std::ostream &out) const = 0;

    virtual double Pole() = 0;

    virtual double Obwod() = 0;

    virtual ~FiguraPlaska();

};


#endif //CPROJECTS_FIGURAPLASKA_H

//
// Created by scavenger on 01.03.18.
//

#ifndef CPROJECTS_KOLO_H
#define CPROJECTS_KOLO_H


#include "FiguraPlaska.h"

class Kolo : public FiguraPlaska {
    double r;

protected:
    void Wypisz(std::ostream &out) const override;

public:
    Kolo(double r);

    double GetR() const;

    void SetR(double r);

    double Obwod() override;

    double Pole() override;

    ~Kolo() override;


};


#endif //CPROJECTS_KOLO_H

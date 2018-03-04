
#include <iostream>
#include "Prostokat.h"
#include "Trojkat.h"
#include "Kolo.h"

int main() {

    FiguraPlaska *figury[3];

    figury[0] = new Prostokat(3, 4);
    figury[1] = new Trojkat(3.01, 4, 2.25);
    figury[2] = new Kolo(12);


    for (int i = 0; i < 3; i++) {
        std::cout << std::endl;
        std::cout << i<<"******************" << std::endl;
        std::cout << "Obwód: " << figury[i]->Obwod() << std::endl;
        std::cout << "Pole: " << figury[i]->Pole() << std::endl;
        figury[i]->Wypisz(std::cout);
        std::cout << std::endl;
        delete figury[i];
    }


    return 0;
}
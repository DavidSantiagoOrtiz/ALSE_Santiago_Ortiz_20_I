#ifndef _MUESTREO_H
#define _MUESTREO_H

#include <iostream>
#include <vector>
#include "Dato.h"

class Muestreo {
public:
    Muestreo();
    bool tomarDato();
    Dato promedio();
    //void promedio();
    ~Muestreo();

private:
    int _tamano;
    std::vector<Dato> _datos;
    //Dato::Dato vector[12];

};
#endif

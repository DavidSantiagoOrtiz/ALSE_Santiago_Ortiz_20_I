#ifndef _MUESTREO_H
#define _MUESTREO_H

#include <iostream>
#include <vector>
#include "Dato.h"
#include <stdlib.h>

#define NUM_MUESTRAS_MIN 12

class Muestreo {
public:
    Muestreo();
    bool tomarDato();
    Dato promedio();
    //void promedio();
    ~Muestreo();

private:
    int _indice;
    //std::vector<Dato> _datos;
    Dato _datos[NUM_MUESTRAS_MIN];

};
#endif

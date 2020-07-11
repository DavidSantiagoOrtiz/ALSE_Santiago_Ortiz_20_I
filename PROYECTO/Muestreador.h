#ifndef _MUESTREO_H
#define _MUESTREO_H

#include <iostream>
#include <vector>
#include "Dato.h"
#include <stdlib.h>

#define NUM_MUESTRAS_M 12

class Muestreo {
public:
    Muestreo();
    bool tomarDato();
    Dato promedio();
    int getIndice(){return _indice;}
    void setIndice(int i){i = _indice;}
    ~Muestreo();

private:
    int _indice;
    //std::vector<Dato> _datos;
    Dato _datos[NUM_MUESTRAS_M];

};
#endif

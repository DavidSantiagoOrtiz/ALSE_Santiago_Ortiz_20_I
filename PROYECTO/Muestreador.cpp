#include "Muestreador.h"
#include "Dato.h"
#include <iostream>

Muestreo::Muestreo(){
    _indice = 0;
}

bool Muestreo::tomarDato()
{
    float t = 22.3, v = 45.7;
    int dr = 67;
    double lo = 74045130 , la = 4355657 , a = 2630;
    unsigned char h = 50 ;

    Dato d(t,h,v,dr,la,lo,a);
    
    if(_indice < NUM_MUESTRAS_M ){
        _datos[_indice] = d;
    }
    _indice++;
    
}

Dato Muestreo::promedio()
{
   Dato pr;
   float t,v;
   int dv;
   double lo,la,a;

   for (int i = 0; i < NUM_MUESTRAS_M ; i++){

       a  += pr.getAltura() ;
       dv += pr.getDirviento();
       la += pr.getLatitud();
       lo += pr.getLongitud();
       t  += pr.getTemperatura();
       v  += pr.getVeloviento();
   }
   pr.setAltura(a/NUM_MUESTRAS_M);
   pr.setDirviento(dv/NUM_MUESTRAS_M);
   pr.setLatitud(la/NUM_MUESTRAS_M);
   pr.setLongitud(lo/NUM_MUESTRAS_M);
   pr.setTemperatura(t/NUM_MUESTRAS_M);
   pr.setVeloviento(v/NUM_MUESTRAS_M);

   return pr;
}

Muestreo::~Muestreo()
{
    std::cout << "Llamada al destructor" << std::endl;
}







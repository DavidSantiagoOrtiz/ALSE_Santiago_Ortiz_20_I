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
    
    if(_indice < NUM_MUESTRAS_MIN ){
        _datos[_indice] = d;
    }
    _indice++;
    
    if(_indice == NUM_MUESTRAS_MIN ){
        return true;
    }else{}
    
    
}

Dato Muestreo::promedio()
{
   Dato pr;
   float t,v;
   int dv;

   for (int i = 0; i < NUM_MUESTRAS_MIN ; i++){
       t += _datos[i].getTemperatura();
       v += _datos[i].getVeloviento();
       dv += _datos[i].getDirviento();
   }
   pr.setTemperatura(t/NUM_MUESTRAS_MIN );
   pr.setVeloviento(v/NUM_MUESTRAS_MIN );
   pr.setDirviento(dv/NUM_MUESTRAS_MIN );

//   std::cout << "Promedio Temperatura:" <<pr.getTemperatura() << std::endl;
//   std::cout << "Promedio Velocidad viento:" <<pr.getVeloviento() << std::endl;
//   std::cout << "Promedio Direccion viento:" <<pr.getDirviento() << std::endl;

   return pr;
}

Muestreo::~Muestreo()
{
    std::cout << "Llamada al destructor" << std::endl;
}







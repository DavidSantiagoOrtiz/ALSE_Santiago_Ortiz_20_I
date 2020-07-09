#include "Muestreador.h"
#include "Dato.h"
#include <iostream>




Muestreo::Muestreo()
{
    _tamano = 0;
    if(_datos.size() != 0) {
        for (int i = 0 ; i <= _datos.size() ; i++){
            _datos[i].setAltura(0);
            _datos[i].setDirviento(0);
            _datos[i].setHumedad(0);
            _datos[i].setLatitud(0);
            _datos[i].setLongitud(0);
            _datos[i].setTemperatura(0.);
            _datos[i].setVeloviento(0.);
        }
    }

}

bool Muestreo::tomarDato()
{


    float t = 22.3, v = 45.7;
    int dr = 67;
    double lo = 74045130 , la = 4355657 , a = 2630;
    unsigned char h = 50 ;

    Dato d(t,h,v,dr,la,lo,a);

    t++;
    v++;
    dr++;
    lo++;
    la++;
    a++;
    h++;

    _datos.push_back(d);

    std::cout << "Temperatura:" <<d.getTemperatura() << std::endl;
    std::cout << "Velocidad viento:" <<d.getVeloviento() << std::endl;
    std::cout << "Direccion viento:" <<d.getDirviento() << std::endl;
    std::cout << "Humedad:" <<d.getHumedad() << std::endl;
    std::cout << "Latitud:" <<d.getLatitud() << std::endl;
    std::cout << "Longitud:" <<d.getLongitud() << std::endl;
    std::cout << "Altura:" <<d.getAltura()<< std::endl;

    return true;
}

Dato Muestreo::promedio()
{
    Dato pr(0.,0,0.,0,0,0,0);
   float t,v;
   int dv;

   for (int i = 0; i < _datos.size(); i++){
       t += _datos[i].getTemperatura();
       v += _datos[i].getVeloviento();
       dv += _datos[i].getDirviento();
   }
   pr.setTemperatura(t/_datos.size());
   pr.setVeloviento(v/_datos.size());
   pr.setDirviento(dv/_datos.size());

   std::cout << "Promedio Temperatura:" <<pr.getTemperatura() << std::endl;
   std::cout << "Promedio Velocidad viento:" <<pr.getVeloviento() << std::endl;
   std::cout << "Promedio Direccion viento:" <<pr.getDirviento() << std::endl;

   return pr;
}

Muestreo::~Muestreo()
{
    std::cout << "Llamada al destructor" << std::endl;
}







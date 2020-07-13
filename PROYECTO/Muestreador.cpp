#include "Muestreador.h"
#include "Dato.h"
#include <iostream>

Muestreo::Muestreo(){
    _indice = 0;
}

bool Muestreo::tomarDato()
{

    Dato d(this->sensor_temperatura(),this->sensor_humedad(),this->sensor_vel_viento(),this->sensor_dir_viento()
           ,this->GPS_latitud(),this->GPS_longitud(),this->GPS_altura());
    
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

       a  += _datos[i].getAltura();
       dv += _datos[i].getDirviento();
       la += _datos[i].getLatitud();
       lo += _datos[i].getLongitud();
       t  += _datos[i].getTemperatura();
       v  += _datos[i].getVeloviento();
   }
   pr.setAltura(a/NUM_MUESTRAS_M);
   pr.setDirviento(dv/NUM_MUESTRAS_M);
   pr.setLatitud(la/NUM_MUESTRAS_M);
   pr.setLongitud(lo/NUM_MUESTRAS_M);
   pr.setTemperatura(t/NUM_MUESTRAS_M);
   pr.setVeloviento(v/NUM_MUESTRAS_M);

   return pr;
}

float Muestreo::sensor_temperatura()
{
    return 22.7;
}

float Muestreo::sensor_vel_viento()
{
    return 330.8;
}

int Muestreo::sensor_dir_viento()
{
    return 45;
}

unsigned char Muestreo::sensor_humedad()
{
    return 28;
}

double Muestreo::GPS_latitud()
{
    return 123456;
}

double Muestreo::GPS_longitud()
{
    return 367538;
}

double Muestreo::GPS_altura()
{
    return 3100;
}







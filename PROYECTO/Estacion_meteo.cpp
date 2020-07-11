#include "Estacion_meteo.h"
#include "Muestreador.h"
#include "alarma_class.h"
#include "Dato.h"
#include "DB_local.h"

#include <iostream>

Estacion_meteo::Estacion_meteo(time_t fecha, int hora, int minuto)
{
    this->_fecha = fecha;
    this->_hora = hora;
    this->_minuto = minuto;

    timer1 = new QTimer(this);
    timer2 = new QTimer(this);
    connect(timer1, SIGNAL(timeout()),this, SLOT(alarma_5_segundos()));
    connect(timer2, SIGNAL(timeout()),this, SLOT(alarma_24_horas()));

}

Estacion_meteo::Estacion_meteo()
{

}

bool Estacion_meteo::iniciar_toma_datos()
{

    timer1->setInterval(0.1);
    timer2->setInterval(8640);

    //timer1->setInterval(1000*INTERVAL_M);
    //timer2->setInterval(1000*INTERVAL_M*NUM_MUESTRAS_M*NUM_MUESTRAS_H*INTERVAL_DIA);
    timer1->start();
    timer2->start();

    return true;
}

bool Estacion_meteo::deterner_toma_datos()
{

}

bool Estacion_meteo::reporteDiario()
{

}

bool Estacion_meteo::abrirGUI()
{

}

bool Estacion_meteo::cerrarGUI()
{

}

void Estacion_meteo::alarma_5_segundos()
{
    this->_number_of_date ++;

    Dato promedio_minuto;
    muestra->tomarDato();

    if (muestra->getIndice() == NUM_MUESTRAS_M){

        promedio_minuto = muestra->promedio();
    }
    muestra->setIndice(0);
    //db_local->guardar_dato(promedio_minuto,this->_hora,this->_minuto);

    std::cout<<"Se guardo un dato:"<<this->_number_of_date<<"  "<<this->_hora<<":"<<this->_minuto<<std::endl;

    timer1->start();
}

void Estacion_meteo::alarma_24_horas()
{
    timer1->stop();
    Dato promedio_hora;

     float t = 0.,v = 0.;
     int dv = 0;
     double lo = 0,la = 0,a = 0;

     for (int j = 1 ; j <= INTERVAL_DIA ; j++){
         for (int i = 1 ; i <= NUM_MUESTRAS_H ; i++){
             promedio_hora = db_local->getdato_minuto(0,0);
             a  += promedio_hora.getAltura() ;
             dv += promedio_hora.getDirviento();
             la += promedio_hora.getLatitud();
             lo += promedio_hora.getLongitud();
             t  += promedio_hora.getTemperatura();
             v  += promedio_hora.getVeloviento();
         }
         promedio_hora.setAltura(a/NUM_MUESTRAS_H);
         promedio_hora.setDirviento(dv/NUM_MUESTRAS_H);
         promedio_hora.setLatitud(la/NUM_MUESTRAS_H);
         promedio_hora.setLongitud(lo/NUM_MUESTRAS_H);
         promedio_hora.setTemperatura(t/NUM_MUESTRAS_H);
         promedio_hora.setVeloviento(v/NUM_MUESTRAS_H);

         std::cout<<"ENVIAR PROMEDIO A LA BASE DE DATOS REMOTA  "<<j<<std::endl;

         promedio_hora.setAltura(0);
         promedio_hora.setDirviento(0);
         promedio_hora.setHumedad(0);
         promedio_hora.setLatitud(0);
         promedio_hora.setLongitud(0);
         promedio_hora.setTemperatura(0.);
         promedio_hora.setVeloviento(0.);
     }

}


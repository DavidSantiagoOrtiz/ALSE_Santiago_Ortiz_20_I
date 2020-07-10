#include <QCoreApplication>
#include <QTimer>
#include <alarma_class.h>
#include <unistd.h>
#include <iostream>
#include "Estacion_meteo.h"



int main(int argc, char *argv[])
{
    bool det;
    Estacion_meteo es;

    det = es.iniciar_toma_datos();
    //if (det = true)


}

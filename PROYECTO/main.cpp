#include "Estacion_meteo.h"
#include <QCoreApplication>
#include <time.h>
#include <iostream>


int main(int argc, char *argv[])
{    
    QCoreApplication a( argc , argv );

    std::time_t f = std::time(nullptr);
    struct tm * timeinfo;
    timeinfo = std::localtime (&f);

    Estacion_meteo EM1B_ECI(f,timeinfo->tm_hour,timeinfo->tm_min);
    EM1B_ECI.iniciar_toma_datos();
    a.exec();
    return 0;
}

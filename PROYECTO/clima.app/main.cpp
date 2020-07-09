#include <QCoreApplication>
#include <QTimer>
#include <alarma_class.h>
#include <unistd.h>
#include <iostream>
#include "Estacion_meteo.h"

#define INTER 5

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QTimer t;
    Alarma al;
    t.setInterval(1000 * INTER);
    al.conexion( t );
    t.start();

    Estacion_meteo es;
    bool det = false;
    int cont = 0;
    while(true){

        usleep(5000000);
        es.iniciar_toma_datos(cont);
        cont ++;
    }

    return a.exec();
}

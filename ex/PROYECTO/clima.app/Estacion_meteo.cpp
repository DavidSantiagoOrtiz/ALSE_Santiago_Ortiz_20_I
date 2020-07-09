#include "Estacion_meteo.h"
#include "Muestreador.h"
#include <iostream>

bool Estacion_meteo::iniciar_toma_datos(int a)
{
    Muestreo m;
    m.tomarDato();
    if (a = 12){
        m.promedio();
    }
    return true;
}

bool Estacion_meteo::deterner_toma_datos()
{
    //apagar la estacion hasta la siguiente toma de datos

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

#include "Estacion_meteo.h"
#include "Muestreador.h"
#include "alarma_class.h"
#include "Dato.h"
#include "DB_local.h"

#include <iostream>


Estacion_meteo::Estacion_meteo()
{
    _nombre = "Estacion_01";
    _ubicacion = "Bogota_DC";
    _usrname  = "Bogota_DC";
    _password = "Bogota_DC";


}

bool Estacion_meteo::iniciar_toma_datos()
{
    bool alarma,sp;
    int h = 0, m = 0;
    Alarma a;
    Muestreo muestra;
    Dato dato;
    DB_local bd;


        for (int i = 1 ; i <= NUM_MUESTRAS_MIN  ; i++){
            alarma = a.activar_Alarma();
            if(alarma = true){
                sp = muestra.tomarDato();
            }
        }
        if (sp = true){
            dato = muestra.promedio();
            m++;
        }
        bd.guardar_dato(dato,h,m);




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

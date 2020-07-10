#ifndef _ESTACION_METEO_H
#define _ESTACION_METEO_H

#include <string>
#include <iostream>


#define NUM_MUESTRAS_MIN 12
#define NUM_MUESTRAS_H 60

class Estacion_meteo{
public:

    Estacion_meteo ();
    bool iniciar_toma_datos();
    bool deterner_toma_datos();
    bool reporteDiario();
    bool abrirGUI();
    bool cerrarGUI();


private:

   std::string _nombre;
   std::string _ubicacion;
   std::string _usrname;
   std::string _password;

};
#endif

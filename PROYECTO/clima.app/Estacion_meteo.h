#ifndef _ESTACION_METEO_H
#define _ESTACION_METEO_H

#include <string>
#include <iostream>


class Estacion_meteo{
public:

    bool iniciar_toma_datos(int a);
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

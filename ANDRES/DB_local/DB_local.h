/**
 * Project Untitled
 */


#ifndef _DB_LOCAL_H
#define _DB_LOCAL_H

#include <iostream>
#include <SQlite3>
#include "Dato.h"


using namespace std;

class DB_local{

    public:
        string path;

        bool guardar_dato(Dato d, int h, int m);
        bool abrir_DB();
        bool cerrar_DB();
        bool crear_DB(char n_DB);
        bool borrar_dato();
        Dato getdato_minuto(int h, int m);
        Dato getdato(int h, int m, int s);
        Dato getPromedio(int h);

};

#endif //_DB_LOCAL_H

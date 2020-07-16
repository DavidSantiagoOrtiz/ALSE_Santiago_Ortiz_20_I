/**
 * Project Untitled
 */


#ifndef _DB_REMOTA_H
#define _DB_REMOTA_H

#include <iostream>
#include <mysql/mysql.h>
#include "DB_remota.h"
#include "Dato.h"

using namespace std;

#define HOST "8.8.8.8"
#define USER "username"
#define PASSWD "uswrpasswd"
#define DB "db_name"

class DB_remota{

    public:

        bool conectar_DB();
        bool desconectar_DB();
        bool guardar_dato(Dato d, int h);

    private:

        string URL;
        MYSQL *connection, mysql;
        MYSQL_RES *result;
        int c;

};

#endif //_DB_REMOTA_H


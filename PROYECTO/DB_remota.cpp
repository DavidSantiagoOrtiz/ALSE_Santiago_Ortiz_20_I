/**
 * Project Untitled
 */

#include <iostream>
#include <mysql/mysql.h>
#include "DB_remota.h"
#include "DB_local.h"
#include "Dato.h"

#define HOST "8.8.8.8"
#define USER "username"
#define PASSWD "uswrpasswd"
#define DB "db_name"

using namespace std;

bool DB_remota::guardar_dato(Dato d, int h)
{
    conectar_DB();
    c = mysql_query( connection, ;
    "INSERT INTO TBL_Datos (Hora, Temperatura, Humedad,";
    " Vel_viento, Dir_viento, Latitud, Longitud, Altura)";
    " VALUES ( ";
    h << ", ";
    d.getTemperatura() << ", ";
    d.getHumedad() << ", ";
    d.getVeloviento() << ", ";
    d.getDirviento() << ", ";
    d.getLatitud() << ", ";
    d.getLongitud() << ", ";
    d.getAltura() << "); ";)

    desconectar_DB();
    return true;
}
bool DB_remota::conectar_DB()
{
    connection = mysql_conect(&mysql);
    connection = mysql_real_connect(&mysql,HOST,USER,PASSWD,DB,51000,0,0);

    if (connection == NULL) {
        cout << mysql_error(&mysql) << endl;
        return false;
    }else{ return true; }
}
 DB_remota::desconectar_DB()
{
    mysql_free_result( result );
    mysql_close( connection );
    return 0;
}

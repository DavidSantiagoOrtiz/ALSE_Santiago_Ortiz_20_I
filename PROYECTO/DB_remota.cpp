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

int DB_remota::guardar_dato(Dato d, int h)
{
    Dato m;
    m.getpromedio();
    conectar_DB();

    c = mysql_query( connection, "INSERT INTO (Temperatura, Humedad, Velo_viento, Dir_viento, Latitud, longitud, altura);"
        "VALUES");

    desconectar_DB();
}
int DB_remota::conectar_DB()
{
    connection = mysql_conect(&mysql);
    connection = mysql_real_connect(&mysql,HOST,USER,PASSWD,DB,51000,0,0);

    if (connection == NULL) {
        cout << mysql_error(&mysql) << endl;
        return 1;
    }else{ return 0; }
}
int DB_remota::desconectar_DB()
{
    mysql_free_result( result );
    mysql_close( connection );
    return 0;
}

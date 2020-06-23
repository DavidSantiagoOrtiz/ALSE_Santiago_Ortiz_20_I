#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include "Polinomio.h"
#include "Termino.h"
#include <vector>

#define pol_max 20

using namespace std;



void lectura(string file_name){


    Polinomio *ptr_POL ;
    std::vector<Polinomio*> vPol;

    std::cout << "Archivo a procesar: " << file_name << std::endl;


    ifstream archivo;
    string texto;
    archivo.open( file_name, ios::in );

    //std::basic_string<char> variable;
    string::size_type ant, pos;

    int pos_var[pol_max];
    int l=0;

     //std::vector<const int*> pos_var;

    string variable;

   while( !archivo.eof() ){
        getline(archivo,texto);
        if( texto.empty() ) continue;
        ptr_POL = new Polinomio (texto);

        pos = ant = 0;
        pos = texto.find_first_not_of("+-1234567890.,^");
        variable= texto.substr(ant,pos).c_str();

        //ptr_POL->setVariable(variable);

        pos = ant = 0;
        do{

                pos = texto.find(variable, pos + 1);
                pos_var[l]=pos;
                ++l;
                ant = pos + 1;
        }while( pos != string::npos);

        //ptr_POL->setOrden(l);

        for(int i = 0; i <= l ; i++){
            int p = 0;
            float c = 0;
            p = atoi( texto.substr(pos_var[i], pos_var[i]).c_str() );
            c = atof( texto.substr(pos_var[i], pos_var[i]).c_str() );
            //ptr_POL->nuevoTermino(c,p);
            std::cout <<"  pol  "<<ptr_POL->getString()<<endl;
        }


       //vPol.push_back( ptr_POL );
   }
    archivo.close();

   std::vector<Polinomio*>::const_iterator it;
   /* for( it = vPol.begin(); it != vPol.end(); ++it ){
            std::cout << (*it)->getString()<< std::endl;
    }*/
     /* for( it = vPol.begin(); it != vPol.end(); ++it ){
       delete *it;
        return;
       }*/
 }

int main(int argc, char** argv){

    if(argc != 2 ){
        std::cout << "Debe pasar el path del archivo a procesar:" << std::endl;
        return -1;
    }
    string nombre = argv[1];
    lectura( nombre );
    return 0;
}

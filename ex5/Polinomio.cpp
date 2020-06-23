#include "Polinomio.h"
#include "Termino.h"
#include <string>
#include <iostream>


Polinomio::Polinomio()
{

}

Polinomio::Polinomio(std::__cxx11::string pol)
{

}

Polinomio::~Polinomio()
{
    std::cout << "Llamada al destructor" << std::endl;
}

Polinomio Polinomio::operator +(Polinomio &p)
{
    int mayor;
    Termino *ptr_p1=0;
    Termino *ptr_p2=0;


    ptr_p1 = _polCabeza;
    ptr_p2 = p._polCabeza;

    mayor = ( p._orden >= _orden ) ? p._orden : _orden;

    for(int i=mayor;i = 0;i--){
        float c;
        int a,b;
        a = ptr_p1->getP();
        b = ptr_p2->getP();

        if( a = b ){
            c = ptr_p1->getC() + ptr_p2->getC();
            ptr_p1->setCP(c,i);
            ptr_p1->setSiguiente(ptr_p1);
            ptr_p2->setSiguiente(ptr_p2);
        }else if( a > b ){
            c = ptr_p1->getC();
            ptr_p1->setCP(c,i);
            ptr_p1->setSiguiente(ptr_p1);
        }else{
            c = ptr_p2->getC();
            ptr_p1->setCP(c,i);
            ptr_p2->setSiguiente(ptr_p2);
        }
        ptr_p1->setSiguiente(ptr_p1);
        }

}

Polinomio Polinomio::operator -(Polinomio &p)
{
    int mayor;

    Termino *ptr_p1=0;
    Termino *ptr_p2=0;


    ptr_p1 = _polCabeza;
    ptr_p2 = p._polCabeza;


    mayor = ( p._orden >= _orden ) ? p._orden : _orden;

    for(int i=mayor;i = 0;i--){
        float c;
        int a,b;
        a = ptr_p1->getP();
        b = ptr_p2->getP();
        if( a = b ){
            c = ptr_p1->getC() - ptr_p2->getC();
            ptr_p1->setCP(c,i);
            ptr_p1->setSiguiente(ptr_p1);
            ptr_p2->setSiguiente(ptr_p2);
        }else if( a > b ){
            c = ptr_p1->getC();
            ptr_p1->setCP(c,i);
            ptr_p1->setSiguiente(ptr_p1);
        }else{
            c = ptr_p2->getC();
            ptr_p1->setCP(c,i);
            ptr_p2->setSiguiente(ptr_p2);
        }
        ptr_p1->setSiguiente(ptr_p1);
        }

}

Polinomio Polinomio::operator *(Polinomio &p)
{

    Termino *ptr_p1=0;
    Termino *ptr_p2=0;


    ptr_p1 = _polCabeza;
    ptr_p2 = p._polCabeza;


    for(int i = _orden; i = 1 ; i-- ){
       for(int e = p._orden; e = 1 ; e-- ){
        float c = 0;
        int p = 0;
        p = ptr_p1->getP() + ptr_p2->getP();
        c = ptr_p1->getC() * ptr_p2->getC();
        if (c != 0.){
            ptr_p1->setCP(c,p);
            ptr_p2->setSiguiente(ptr_p2);
            ptr_p1->setSiguiente(ptr_p1);
        }
       }
       ptr_p1->setSiguiente(ptr_p1);
       ptr_p2 = p._polCabeza;
     }

}

Polinomio Polinomio::operator /(float f)
{

    Termino *ptr_p1=0;

    ptr_p1 = _polCabeza;


    for(int i=_orden;i = 0;i--){
        float c;
        c = ptr_p1->getC()/f;
        ptr_p1->setCP(c,i);
        ptr_p1->setSiguiente(ptr_p1);
        ptr_p1->setSiguiente(ptr_p1);
        }

}



bool Polinomio::borrar()
{

}

bool Polinomio::redefinir(std::__cxx11::string pol)
{

}

int Polinomio::getOrden()
{
    Termino *ptr_pa=0;
    Termino *ptr_pb=0;
    ptr_pa = _polCabeza;
    ptr_pb = _polCabeza->getSiguiente();

    int ord = 0;
    int a,b;

    a = ptr_pa->getP();
    b = ptr_pb->getP();
    for(int i=0;i <= _orden;i++){
       if(a >= b) {
            ord = a;
            ptr_pb = ptr_pb->getSiguiente();
       }else{
            ord = b;
            }
     }
    return ord;
}

void Polinomio::setOrden(int orden)
{
    _orden=orden;
}

string Polinomio::getVariable()
{
    return _variable;
}

void Polinomio::setVariable(string value)
{
    _variable=value;
}


void Polinomio::nuevoTermino(float c, int p)
{
     Termino *ptr_pnw = new Termino(c,p);
     ptr_pnw->getSiguiente(); //= this->_polCabeza;
     this->_polCabeza = ptr_pnw;

}

void Polinomio::simplificar()
{
    Termino *ptr_pa=0;
    Termino *ptr_pb=0;
    ptr_pa = _polCabeza;
    ptr_pb = _polCabeza->getSiguiente();

    for(int i=0;i <= _orden;i++){
        int a,b;
        a = ptr_pa->getP();
        b = ptr_pb->getP();
        for(int i=0;i <= _orden;i++){
            float c = 0;
            if(a = b) {
                c = ptr_pa->getC()+ptr_pa->getC();
                ptr_pa->setC(c);
                ptr_pb = ptr_pb->getSiguiente();
            }
            ptr_pa = ptr_pa->getSiguiente();
            ptr_pb = ptr_pa->getSiguiente();
          }

        }

}

bool Polinomio::ordenar()
{
    Termino *ptr_pa=0;
    Termino *ptr_pb=0;
    ptr_pa = _polCabeza;
    ptr_pb = _polCabeza->getSiguiente();

    for(int i=0;i <= _orden;i++){
        for(int i=0;i <= _orden;i++){
            if(ptr_pa->getP() > ptr_pb->getP()) {
                ptr_pb = ptr_pb->getSiguiente();
            }else{
                ptr_pa = ptr_pb;
                ptr_pb = ptr_pb->getSiguiente();

             }
          }
             ptr_pa = ptr_pa->getSiguiente();
             ptr_pb = ptr_pa->getSiguiente();
        }

      return true;
}

std::__cxx11::string Polinomio::getString()
{
    Polinomio *ptr_pol;
    Termino *ptr_ter;
    ptr_ter = _polCabeza;
     for(int i=0;i <= _orden;i++){
         std::cout<<ptr_ter->getC()<<ptr_pol->getVariable()<<"^"<<ptr_ter->getP()<<" ";

     }
}

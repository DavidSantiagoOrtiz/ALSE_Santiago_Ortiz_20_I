#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;


int main(int argc, char** argv ){


  if( argc != 2 ){
    cout << "Se debe indicar la ruta del archivo a leer" << endl;
    return 1;
  }

  string path;
  path = argv[1];
  ifstream archivo;
  archivo.open( path );

  cout << "Se abrirá el archivo: " << path << endl;

  int tipo = 0;
  float radio, lado, base, altura;
  radio = lado = base = altura = 0.;

  std::vector <string> line;
  std::vector <float> a;
  string ln;
  char c[3];
  int  t=0;
  float aux=0;
  if( archivo.is_open() ){
    while( !archivo.eof()  ){
        std::getline( archivo,ln);
        line.push_back( ln );
        cout << "linea: " << ln << endl;
        aux=sizeof(ln);
         cout << "tam: " << aux << endl;

         for(int t = 0;t < sizeof(ln) ; t++){
             c[t]=ln[t];
             if(c[t]!=' '){
                   for(int i= 0; i < 3;i++){
                     c[i]=ln[t];
                     if(c[t]!=' '){
                         t++;
                         aux=atof(c);
                         a.push_back( aux );
                     }
                 }

             }
            tipo=a[0];
             switch (tipo) {
             case 1:
                 cout<<"Se creara un cirulo"<<endl;
                 radio=a[1];
                 pG = new Circulo( radio );
                 break;
             case 2:
                 lado=a[1];
                 pG = new Cuadrado( lado );
                 break;
             case 3:
                 base=a[1];
                 altura=a[2];
                 pG = new Triangulo( base, altura );
                 break;
             default:
                 break;
             }
             vFig.push_back( pG );
         }

         cout << vFig.size() << endl;

         for (int i = 0; i < vFig.size(); i++){
             cout << "Perímetro: " << vFig[i]->perimetro() << " y área: " << vFig[i]->area() << endl;
         }

         for (int i = 0; i < vFig.size(); i++){
             delete vFig.at(i);
         }
        }


       }
       // cout << "Se abrirá el archivo: " << path << endl;
     }


  archivo.close();
}
  




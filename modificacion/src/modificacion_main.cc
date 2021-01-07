/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica  
 *
 * @author Sara Moral Ruiz
 * @brief Este programa toma como parámetro por línea de comandos el nombre de un fichero de entrada y uno de salida de libre elección.
 *  En el fichero de salida aparecerá el resultado de una operación de racionales según usted elija (se le solicitará explícitamente).
 *  MENÚ:   1:suma  2:resta  3:multiplicación  4:división  5:media        
 */

#include <iostream>
#include <stdexcept>
#include<limits>
#include "modificacion.h"
#include <math.h>
#include <fstream>

using namespace std;

void Usage(int argc, char *argv[]){
  
  
  if (argc != 3){
    cout << argv[0] << ": Falta algún parámetro" << endl;
    cout << "Pruebe "<< argv[0] << " - -help para más información" << endl;
    exit(EXIT_SUCCESS);
  }
  string parameter{argv[2]}; 
  if (parameter == "-help"){
    cout << kHelpText << endl;
    exit(EXIT_SUCCESS);
  }
}

int main (int argc, char* argv[]){
  Usage(argc, argv);
 
  string kFileName{argv[2]};
  ofstream fichero (kFileName); 

   Racional racional1{2,3}, racional2{3,5};
   Racional resultado{0.0,0.0};
   cout << "Introduzca 1 para obtener la suma, 2 para la resta, 3 para la multiplicación, 4 para la división y 5 para la media."<< endl;
   int n;
   cin >> n;

   resultado.print(kFileName);
   if (n==1){
     resultado.add(kFileName,racional1,racional2);
   }
   if (n==2){
     resultado.subst(kFileName,racional1,racional2);
   }
   if (n==3){
     resultado.multiplicate(kFileName,racional1,racional2);
   }
   if (n==4){
      resultado.divide(kFileName,racional1,racional2);
   }
   if (n==5){
      resultado.media(kFileName,racional1,racional2);    //modificación
   }
   
}
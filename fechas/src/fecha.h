/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Sara Moral Ruiz
 * @brief Este programa toma como parámetro por línea de comandos el día mes y año de una fecha que usted elija,
 *  además también toma un número natural el cual corresponderá al número de fechas posteriores a la  introducuda.
 *  Dichas fechas aparecerán en un archivo de texto cuyo nambre también será aportado por el usuario en la misma línea de comandos.
 *  Modo de uso(RESPETAR ESPACIOS): ./fechas día mes año número_fechas_posteriores nombre_fichero_salida.          
 */

#include <iostream>
#include <fstream>
#include <stdexcept> 
#include <limits>
#include <math.h>

const std::string kHelpText = "Este programa toma como parámetro por línea de comandos el día mes y año de una fecha que usted elija, además también toma un número natural el cual corresponderá al número de fechas posteriores a la  introducuda. Dichas fechas aparecerán en un archivo de texto cuyo nambre también será aportado por el usuario en la misma línea de comandos.                                                               Modo de uso(RESPETAR ESPACIOS): ./fechas día mes año número_fechas_posteriores nombre_fichero_salida ";

void Usage(int argc, char *argv[]);

class Date{
 private:
    int day_, month_, year_;
 public: 
    Date(int arg1, int arg2, int arg3);
      void setDay(int input);
      void setMonth(int input);
      void setYear(int input);
      void printYear(std::string nombre, int valor);
      void isBisiesto(int year_);
};


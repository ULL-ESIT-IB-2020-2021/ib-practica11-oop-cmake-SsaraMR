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
#include "fecha.h"
#include <stdexcept>
#include <limits>
#include <math.h>

using namespace std;

Date::Date(int arg1, int arg2, int arg3){
  day_ = arg1;
  month_ = arg2; 
  year_ = arg3;
  }
void Date::setDay(int input){
  day_ = input;
  }
void Date::setMonth(int input){
  month_ = input;
  }
void Date::setYear(int input){
  year_ = input;
   }
void Date::printYear(string nombre, int valor){
    ofstream fichero(nombre);
    for (int i = 0; i < valor; ++i){
      day_ = day_ + 1;
      if((month_== 1)&&(day_==32)){
        day_= 1;
        month_ = 2;
      }
      if((day_== 29)&&(month_==2)&&((year_ % 4)!=0)){
        day_= 1;
        month_ = month_ + 1;
      }
      if((day_== 30)&&(month_==2)&&((year_ % 4)==0)){
        day_= 1;
        month_ = month_ + 1;
      }
      if((month_== 3)&&(day_==32)){
        day_= 1;
        month_ = 4;
      }
      if((month_== 4)&&(day_==31)){
        day_= 1;
        month_ = 5;
      }
      if((month_== 5)&&(day_==32)){
        day_= 1;
        month_ = 6;
      }
      if((month_== 6)&&(day_==31)){
        day_= 1;
        month_ = 7;
      }
      if((month_== 7)&&(day_==32)){
        day_= 1;
        month_ = 8;
      }
      if((month_== 8)&&(day_==32)){
        day_= 1;
        month_ = 9;
      }
      if((month_== 9)&&(day_==31)){
        day_= 1;
        month_ = 10;
      }
      if((month_== 10)&&(day_==32)){
        day_= 1;
        month_ = 11;
      }
      if((month_== 11)&&(day_==31)){
        day_= 1;
        month_ = 12;
      }
      if((month_== 12)&&(day_==32)){
        day_= 1;
        month_ = 1;
        year_ = year_ + 1;
      }
      fichero << day_ << '/' << month_ << '/' << year_ << std::endl;
        }
    }
void Date::isBisiesto(int year_){
  !(year_ % 4) ? std::cout << "El año introducido es bisiesto\n" : std::cout << "El año introducido no es bisiesto\n";
    }

#include <iostream>
#include <fstream>
#include "fecha.h"
#include <stdexcept>
#include <limits>
#include <math.h>

using namespace std;

    Date(int arg1, int arg2, int arg3){
        day_ = arg1;
        month_ = arg2;
        year_ = arg3;
    }
    void setDay(int input){
        day_ = input;
    }
    void setMonth(int input){
        month_ = input;
    }
    void setYear(int input){
        year_ = input;
    }
    void printYear(string nombre, int valor){
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
    void isBisiesto(int year_){
        !(year_ % 4) ? std::cout << "El año introducido es bisiesto\n" : std::cout << "El año introducido no es bisiesto\n";
    }
};
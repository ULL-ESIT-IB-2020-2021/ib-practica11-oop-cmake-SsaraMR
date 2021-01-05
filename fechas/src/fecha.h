#include <iostream>
#include <fstream>
#include <stdexcept>
#include <limits>
#include <math.h>

const std::string kHelpText = "Este programa toma como parámetro por línea de comandos el día mes y año de una fecha que usted elija, además también toma un número natural el cual corresponderá al número de fechas posteriores a la introducuda. Dichas fechas aparecerán en un archivo de texto cuyo nambre también será aportado por el usuario en la misma línea de comandos";

void Usage(int argc, char *argv[]);

class Date{
private:
    int day_, month_, year_;
public: 
    Date(int arg1, int arg2, int arg3){
        day_ = arg1;
        month_ = arg2;
        year_ = arg3;
    }
void setDay(int input);
void setMonth(int input);
void setYear(int input);
void printYear(std::string nombre, int valor);
void isBisiesto(int year_);
};


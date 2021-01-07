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
#include <math.h>

const std::string kHelpText = "Este programa toma como parámetro por línea de comandos el nombre de un fichero de entrada y uno de salida de libre elección. En el fichero de salida aparecerá el resultado de una operación de racionales según usted elija (se le solicitará explícitamente). MENÚ:   1:suma  2:resta  3:multiplicación  4:división  5:media";
void Usage(int argc, char *argv[]);


class Racional{
 private: 
    double num_, denom_;
 public:
  Racional(double arg1, double arg2);
    void add(std::string nombre,Racional rac1, Racional rac2);
    void subst(std::string nombre,Racional rac1, Racional rac2);
    void multiplicate(std::string nombre,Racional rac1, Racional rac2);
    void divide(std::string nombre,Racional rac1, Racional rac2);
    void print(std::string nombre);
    void media(std::string nombre,Racional rac1, Racional rac2);     //modificación
};

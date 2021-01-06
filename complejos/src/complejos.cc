/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Sara Moral Ruiz
 * @brief Este programa muestra dos números complejos y el resultado de la suma, resta y producto de ambos.          
 */

#include <iostream>
#include <stdexcept>
#include<limits>
#include <math.h>
#include "complejo.h"

using namespace std;


int main() {
  Complex complejo1{4, 5}, complejo2{7, -8};
  Complex resultado;
  resultado.print(complejo1, complejo2);
  resultado.add(complejo1, complejo2);
  resultado.subst(complejo1, complejo2);
  resultado.multiplicate(complejo1, complejo2); 
}
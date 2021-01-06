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


class Complex{
private:
    double real_, imag;
public:
    Complex(int arg1 = 0, int arg2 = 0);
    void add(Complex comp1, Complex comp2);
    void subst(Complex comp1, Complex comp2);
    void multiplicate(Complex comp1, Complex comp2);
    void print(Complex comp1, Complex comp2);
};
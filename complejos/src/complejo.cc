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

    Complex::Complex(int arg1 , int arg2 ){   
        real_ = arg1;
        imag = arg2;
    }
    void Complex::add(Complex comp1, Complex comp2){
        real_ = comp1.real_ + comp2.real_;
        imag = comp1.imag + comp2.imag;
        std::cout<<"("<<comp1.real_<<" + ("<<comp1.imag<<"i)) + ("<<comp2.real_<<" + ("<<comp2.imag<<"i)) = "<<real_<<" + ("<<imag<<"i)"<<endl;
    }
    void Complex::subst(Complex comp1, Complex comp2){
        real_ = comp1.real_ - comp2.real_;
        imag = comp1.imag - comp2.imag;
        std::cout<<"("<<comp1.real_<<" + ("<<comp1.imag<<"i)) - ("<<comp2.real_<<" + ("<<comp2.imag<<"i)) = "<<real_<<" + ("<<imag<<"i)"<<endl;
    }
    void Complex::multiplicate(Complex comp1, Complex comp2){
        real_ = comp1.real_ * comp2.real_ + -1 * (comp1.imag * comp2.imag);
        imag = comp1.imag * comp2.real_ + comp1.real_ * comp2.imag;
        std::cout<<"("<<comp1.real_<<" + ("<<comp1.imag<<"i)) * ("<<comp2.real_<<" + ("<<comp2.imag<<"i)) = "<<real_<<" + ("<<imag<<"i)"<<endl;
    }
    
    void Complex::print(Complex comp1, Complex comp2){
        std::cout <<"Complejo1: "<< "("<<comp1.real_<<" + ("<<comp1.imag<<"i))"<<endl;
        std::cout <<"Complejo2: "<< "("<<comp2.real_<<" + ("<<comp2.imag<<"i))"<<endl;
    }

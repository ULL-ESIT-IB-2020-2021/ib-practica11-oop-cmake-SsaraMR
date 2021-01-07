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
#include <fstream> 
#include "modificacion.h"

using namespace std;
 

    Racional::Racional(double arg1 = 0, double arg2 = 0){   
        num_ = arg1;
        denom_ = arg2;
    }
    
    void Racional::add(string nombre,Racional rac1, Racional rac2){
        ofstream fichero(nombre);
        float num1 = rac1.num_;
        float denom1 = rac1.denom_;
        float num2 = rac2.num_;
        float denom2 = rac2.denom_;

        num_ = denom2 * num1 + denom1 * num2;
        denom_ = denom1 * denom2;
        fichero << rac1.num_ << "/" << rac1.denom_ << " + " << rac2.num_ << "/" << rac2.denom_ << " = "<<num_<<"/"<<denom_<<endl;
    }
    void Racional::subst(string nombre,Racional rac1, Racional rac2){
        ofstream fichero(nombre);
        float num1 = rac1.num_;
        float denom1 = rac1.denom_;
        float num2 = rac2.num_;
        float denom2 = rac2.denom_;

        num_ = denom2 * num1 - denom1 * num2;
        denom_ = denom1 * denom2;
        fichero << rac1.num_ << "/" << rac1.denom_ << " - " << rac2.num_ << "/" << rac2.denom_ << " = "<<num_<<"/"<<denom_<<endl;
    }
    void Racional::multiplicate(string nombre,Racional rac1, Racional rac2){
        ofstream fichero(nombre);
        float num1 = rac1.num_;
        float denom1 = rac1.denom_; 
        float num2 = rac2.num_;
        float denom2 = rac2.denom_;

        num_ = num1 * num2;
        denom_ = denom1 * denom2;
        fichero << rac1.num_ << "/" << rac1.denom_ << " * " << rac2.num_ << "/" << rac2.denom_ << " = "<<num_<<"/"<<denom_<<endl;
    }
    void Racional::divide(string nombre,Racional rac1, Racional rac2){
        ofstream fichero(nombre);
        float num1 = rac1.num_;
        float denom1 = rac1.denom_;
        float num2 = rac2.num_;
        float denom2 = rac2.denom_;
        num_ = num1 * denom2;
        denom_ = num2 * denom1;
        fichero <<"("<< rac1.num_ << "/" << rac1.denom_ << ") / (" << rac2.num_ << "/" << rac2.denom_ << ") = "<<num_<<"/"<<denom_<<endl;
    }
    void Racional::print(string nombre){
        ofstream fichero(nombre);
        std::cout << "Abre el aricivo de texto " << nombre << ".txt que se ha generado para ver el resultado de la operación."<< endl;
    }
    void Racional::media(string nombre,Racional rac1, Racional rac2){       //modificación
        ofstream fichero(nombre);
        float num1 = rac1.num_;
        float denom1 = rac1.denom_;
        float num2 = rac2.num_;
        float denom2 = rac2.denom_;

        num_ = (num1 + num2)/2;
        denom_ = (denom1 + denom2)/2;
        fichero <<"La media de "<< rac1.num_ << "/" << rac1.denom_ << " y " << rac2.num_ << "/" << rac2.denom_ << " es "<<num_<<"/"<<denom_<<endl;
    }

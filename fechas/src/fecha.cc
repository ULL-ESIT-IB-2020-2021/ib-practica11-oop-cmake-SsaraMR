#include <iostream>
#include <stdexcept>
#include<limits>
#include <math.h>



class Date{
private:
    int day_, month_, year_;
public:
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
    void printYear(){
        std::cout << day_ << '/' << month_ << '/' << year_ << std::endl;
    }
    void isBisiesto(){
        !(year_ % 4) ? std::cout << "Es bisiesto\n" : std::cout << "No es bisiesto\n";
    }
};

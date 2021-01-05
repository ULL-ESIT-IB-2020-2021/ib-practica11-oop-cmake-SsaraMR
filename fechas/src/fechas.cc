#include "fecha.h"
#include <iostream>
#include <fstream>
#include <stdexcept>
#include<limits>
#include <math.h>

using namespace std;

void Usage(int argc, char *argv[]){
  
  
  if (argc != 6){
      cout << argv[0] << ": Falta algún parámetro" << endl;
      cout << "Pruebe "<< argv[0] << " - - - - help para más información" << endl;
      exit(EXIT_SUCCESS);
  }
  string parameter{argv[5]};
  if ( parameter == "help"){
    cout << kHelpText << endl;
    exit(EXIT_SUCCESS);
  }
}

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
 
int main (int argc, char* argv[])
{ 
    Usage(argc, argv);
    string dayy{argv[1]};
    int day = stoi(dayy); 
    string monthh{argv[2]}; 
    int month = stoi(monthh);
    string yearr{argv[3]};
    int year = stoi(yearr);
    string limitt{argv[4]};
    int limit = stoi(limitt);
    string kFileNme{argv[5]};
    ofstream fichero (kFileNme);
    
    Date today {day,month,year};
    fichero << today.printYear() << today.isBisiesto() << endl;
    
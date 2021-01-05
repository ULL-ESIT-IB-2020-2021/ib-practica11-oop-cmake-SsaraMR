#include <iostream>
#include <fstream>
#include <stdexcept>
#include <limits>
#include "fecha.h"
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
    int limite = stoi(limitt);
    string kFileNme{argv[5]};
    ofstream fichero (kFileNme);

    Date today {day,month,year};

    today.printYear(kFileNme, limite);
    today.isBisiesto(year);
    cout << "Abre el aricivo de texto que se ha generado para ver el resultado de las fechas porteriores."<< endl;
}

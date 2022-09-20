#ifndef EPISODIO_H
#define EPISODIO_H
#include <iostream>
#include "Video.h"

class Episodio:public Video{
  public:
    Episodio(std::string, std::string, int, int , std::string, std::string,std::string , int , double, int);
    //Getters
    int getNumeroCap();
    int getNumeroTemp();
    std::string getNombre();
    //Setters
    void setNumeroCap(int);
    void setNumeroTemp(int);
    void setNombre(std::string);
    std::string imprime() override;
  private:
    int numeroCap;
    int numeroTemp;
    std::string nombre;
    int id;
};

#endif //EPISODIO_H
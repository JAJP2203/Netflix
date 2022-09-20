#ifndef PELICULA_H
#define PELICULA_H
#include <iostream>
#include "Video.h"

class Pelicula:public Video{
  public:
    Pelicula(std::string, std::string, std::string, std::string, int, double,int,std::string);
    //Getters
    int getDuracion();
    std::string getResena();
    //Setters
    void setDuracion(int);
    void setResena(std::string);
    //Funcion heredadas
    std::string imprime() override;
  private:
    std::string resena;
    int duracion; 
};

#endif //PELICULA_H
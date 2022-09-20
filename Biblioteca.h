#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H
#include <iostream>
#include <vector> 
#include "Video.h"
#include "Pelicula.h"
#include "Episodio.h"

class Biblioteca{
  public:
    Biblioteca();  //Constructor para la carga de datos
    void buscarPeliculaGen(std::string);
    void buscarPeliculaCal(double);
    void buscarEpiGen(std::string);
    void buscarEpiCal(double);
    void buscarVidGen(std::string);
    void buscarVidCal(double);
    void agregarVideo(std::string);
    void modificarCali(std::string, double);
  private:
    std::vector<Video*> listaVideos; 
};

#endif //BIBLIOTECA_H
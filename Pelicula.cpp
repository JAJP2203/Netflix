#include <string>
#include <iostream>
#include "Pelicula.h"

Pelicula::Pelicula(std::string titulo_, std::string actores_, std::string director_, std::string genero_, int ano_, double calificacion_,int duracion_,std::string resena_):Video(titulo_, actores_, director_, genero_, ano_, calificacion_){
  resena = resena_;
  duracion = duracion_;
}

//Getters
int Pelicula::getDuracion(){
    return duracion;
}

std::string Pelicula::getResena(){
    return resena;
}
//Setters
void Pelicula::setDuracion(int _duracion ){
  duracion=_duracion;
}
void Pelicula::setResena(std::string _resena){
  resena = _resena;
}

std::string Pelicula::imprime(){
  std::string duracion_ = std::to_string(duracion);
  return Video::imprime() + "\nDuracion de la pelicula(minutos): " + duracion_ + "\nResenia de la pelicula: " + resena;
}
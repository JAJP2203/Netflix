#include <string>
#include <iostream>
#include "Episodio.h"

Episodio::Episodio(std::string _nombre, std::string titulo_, int _numeroTemp, int _numeroCap, std::string actores_, std::string director_, std::string genero_, int ano_, double calificacion_, int id_):Video(titulo_, actores_, director_, genero_, ano_, calificacion_){
  numeroCap = _numeroCap;
  numeroTemp = _numeroTemp;
  nombre = _nombre;
  id = id_;
}

//Getters
int Episodio::getNumeroCap(){
    return numeroCap;
}
int Episodio::getNumeroTemp(){
    return numeroTemp;
}
std::string Episodio::getNombre(){
    return nombre;
}
//Setters
void Episodio::setNumeroCap(int _numeroCap ){
  numeroCap=_numeroCap;
}
void Episodio::setNumeroTemp(int _numeroTemp){
  numeroTemp = _numeroTemp;
}
void Episodio::setNombre(std::string _nombre){
  nombre=_nombre;
}

std::string Episodio::imprime(){
  std::string numTemp = std::to_string(numeroTemp);
  std::string numCap = std::to_string(numeroCap);
  return Video::imprime() + "\nNombre de la serie: " + nombre + "\nNumero de temporada: " + numTemp + "\nNumero de Capitulo: " + numCap;
}
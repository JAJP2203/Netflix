#include <string>
#include <iostream>
#include <string.h>
#include "Video.h"

Video::Video(){
  titulo = " ";
  actores = " ";
  director = " ";
  genero = " ";
  ano = 0;
  calificacion = 0;
}

Video::Video(std::string _titulo, std::string _actores, std::string _director, std::string _genero, int _ano, double _calificacion){
  titulo = _titulo;
  actores = _actores;
  director = _director;
  genero = _genero;
  ano = _ano;
  calificacion = _calificacion;
}

std::string Video::getTitulo(){
  return titulo;
}
std::string Video::getActores(){
  return actores;
}
std::string Video::getDirector(){
  return director;
}
std::string Video::getGenero(){
  return genero;
}
int Video::getAno(){
  return ano;
}
double Video::getCalificacion(){
  return calificacion;
}

void Video::setTitulo(std::string _titulo){
  titulo = _titulo;
}
void Video::setActores(std::string _actores){
  actores = _actores;
}
void Video::setDirector(std::string _director){
  director = _director;
}
void Video::setGenero(std::string _genero){
  genero = _genero;
}
void Video::setAno(int _ano){
  ano = _ano;
}
void Video::setCalificacion(double calificacion_){
  calificacion = calificacion_;
}

std::string Video::imprime(){
  std::string anoo = std::to_string(ano);
  std::string cali = std::to_string(calificacion);
  return "\nTitulo: " + titulo + "\nActor principal: " + actores + "\nDirector: " + director + "\nGenero: " + genero + "\nAnio de salida: " + anoo + "\nCalificacion(estrellas): " + cali;
}

void Video::operator+(const double nueva){
    double promedio = (calificacion + nueva)/2;
    calificacion = promedio;
}
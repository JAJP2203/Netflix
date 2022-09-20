#include "Biblioteca.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string.h>
#include "Pelicula.h"
#include "Episodio.h"
#include "Video.h"

Biblioteca::Biblioteca(){
  
}

void Biblioteca::agregarVideo(std::string archivoV){
  char tipoEnvio;
  //////
  std::ifstream archivo;
  std::string titulo_;
  std::string actores_;
  std::string director_;
  std::string genero_;
  int ano_;
  double calificacion_;
  std::string resena_;
  int duracion_;
  int id_;
  int cantidadTemps_;
  std::string nombre_;
  int numeroCap_;
  int numeroTemp_;
  int cantCap_;
  archivo.open(archivoV);
  if (archivo.is_open()){
        while (archivo >> tipoEnvio) {          
          if (tipoEnvio == 'p' ) {    
            archivo >> titulo_ >> actores_ >> director_ >> genero_ >> ano_ 
            >> calificacion_ >>duracion_>>resena_;
            listaVideos.push_back(new Pelicula(titulo_, actores_, director_, genero_, ano_, calificacion_,duracion_,resena_));
          }
          else{
            archivo>>nombre_>>titulo_>>numeroTemp_>>numeroCap_>>actores_>>director_>>genero_>>ano_ 
            >>calificacion_>>id_;
            listaVideos.push_back(new Episodio(nombre_, titulo_, numeroTemp_, numeroCap_, actores_, director_, genero_, ano_, calificacion_, id_));
          }
        }
    }
    archivo.close();
}

void Biblioteca::buscarPeliculaGen(std::string gen){
  for (int i=0; i < listaVideos.size(); i++) {
        if (Pelicula* archivo = dynamic_cast<Pelicula*>(listaVideos[i])){
          if (archivo->getGenero() == gen) {
            std::cout<<archivo->imprime()<<std::endl;
          }
        }
  }
}

void Biblioteca::buscarPeliculaCal(double cali){
  while(true){
    try{
      if (cali < 1 || cali > 5){
        throw "La calificacion ingresada es invalida";
        
      }
      break;
    }
    catch(const char* msg){
        std::cerr<<msg<<std::endl;
        std::cout<<"Ingrese un numero entero entre el 1-5: "<<std::endl;
        std::cin>>cali;
      }
  }
  for (int i=0; i < listaVideos.size(); i++) {
        if (Pelicula* archivo = dynamic_cast<Pelicula*>(listaVideos[i])){
          if (archivo->getCalificacion() == cali) {
            std::cout<<archivo->imprime()<<std::endl;
          }
        }
  }
}

void Biblioteca::buscarEpiGen(std::string gen){
  for (int i=0; i < listaVideos.size(); i++) {
      if (Episodio* archivo = dynamic_cast<Episodio*>(listaVideos[i])){
        if (archivo->getGenero() == gen) {
          std::cout<<archivo->imprime()<<std::endl;
        }
      }
  }
}

void Biblioteca::buscarEpiCal(double cali){
  while(true){
    try{
      if (cali < 1 || cali > 5){
        throw "La calificacion ingresada es invalida";
        
      }
      break;
    }
    catch(const char* msg){
        std::cerr<<msg<<std::endl;
        std::cout<<"Ingrese un numero entero entre el 1-5: "<<std::endl;
        std::cin>>cali;
    }
  }
  for (int i=0; i < listaVideos.size(); i++) {
        if (Episodio* archivo = dynamic_cast<Episodio*>(listaVideos[i])){
          if (archivo->getCalificacion() == cali) {
            std::cout<<archivo->imprime()<<std::endl;
          }
        }
  }
}

void Biblioteca::buscarVidGen(std::string gen){
  for (int i=0; i < listaVideos.size(); i++) {
      if (Video* archivo = dynamic_cast<Video*>(listaVideos[i])){
        if (archivo->getGenero() == gen) {
          std::cout<<archivo->imprime()<<std::endl;
        }
      }
  }
}

void Biblioteca::buscarVidCal(double cali){
  while(true){
    try{
      if (cali < 1 || cali > 5){
        throw "La calificacion ingresada es invalida";
        
      }
      break;
    }
    catch(const char* msg){
        std::cerr<<msg<<std::endl;
        std::cout<<"Ingrese un numero entero entre el 1-5: "<<std::endl;
        std::cin>>cali;
    }
  }
  for (int i=0; i < listaVideos.size(); i++) {
        if (Video* archivo = dynamic_cast<Video*>(listaVideos[i])){
          if (archivo->getCalificacion() == cali) {
            std::cout<<archivo->imprime()<<std::endl;
          }
        }
  }
}

void Biblioteca::modificarCali(std::string titulo_, double cali){
  while(true){
    try{
      if (cali < 1 || cali > 5){
        throw "La calificacion ingresada es invalida";
        
      }
      break;
    }
    catch(const char* msg){
        std::cerr<<msg<<std::endl;
        std::cout<<"Ingrese un numero entero entre el 1-5: "<<std::endl;
        std::cin>>cali;
    }
  }
  for (int i=0; i < listaVideos.size(); i++) {
          if (listaVideos[i]->getTitulo() == titulo_) {
            *listaVideos[i] + (cali);
            std::cout<<"\nLa nueva Calificacion de "<<listaVideos[i]->getTitulo()<<" es "<<listaVideos[i]->getCalificacion()<<std::endl;
          }
  }
}





#ifndef VIDEO_H
#define VIDEO_H
#include <iostream>

class Video{
  public:
    Video();
    Video(std::string, std::string, std::string,std::string, int, double);
    //Getters
    std::string getTitulo();
    std::string getActores();
    std::string getDirector();
    std::string getGenero();
    int getAno();
    double getCalificacion();
    //Setters
    void setTitulo(std::string);
    void setActores(std::string);
    void setDirector(std::string);
    void setGenero(std::string);
    void setAno(int);
    void setCalificacion(double);
    //Metodos adicionales
    virtual std::string imprime();
    void operator+(const double);
    
  private:
    std::string titulo;
    std::string actores;
    std::string director;
    std::string genero;
    int ano;
    double calificacion;
    char archivo;

};
#endif //VIDEO_H
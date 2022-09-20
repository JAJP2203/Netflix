// José Antonio Juárez Pacheco A00572186

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include "Biblioteca.h"
#include "Pelicula.h"
#include "Video.h"
#include "Episodio.h"


int main() {
  Biblioteca listavideo;
  int opcion;
  listavideo.agregarVideo("datosVideo.txt");
  do{
    system("cls");
    std::cout<<"Bienvenido al servicio de streaming Neflox, la mejor platafroma de streaming"<<std::endl;
    std::cout<<"-----------------------------------------------------------------"<<std::endl;
    std::cout<<"Seleccione alguna de las opciones del menu"<<std::endl;
    std::cout<<"Opcion 1: Buscar peliculas por genero"<<std::endl;
    std::cout<<"Opcion 2: Buscar peliculas por calificacion"<<std::endl;
    std::cout<<"Opcion 3: Buscar series por genero"<<std::endl;
    std::cout<<"Opcion 4: Buscar capitulos por calificacion"<<std::endl;
    std::cout<<"Opcion 5: Buscar videos (Pelicula o episodio) por genero"<<std::endl;
    std::cout<<"Opcion 6: Buscar videos (Pelicula o episodio) por calificacion"<<std::endl;
    std::cout<<"Opcion 7: Calificar video"<<std::endl;
    std::cout<<"Opcion 8: Salir"<<std::endl;
    std::cout<<"--------------------------"<<std::endl;
    std::cout<<"Ingrese la opcion deseada: ";
    std::cin>>opcion;
    std::string GEN;
    double califi;
    std::string tituloo;
    double caliNueva;
  switch(opcion){
    case 1:
        std::cout<<"Cual genero deseas buscar?(drama, ficcion, accion)\n"<<std::endl;
        std::cin>>GEN;
        listavideo.buscarPeliculaGen(GEN);
        break;
    case 2:
        std::cout<<"Con que calificacion deseas buscar peliculas (1-5)?\n"<<std::endl;
        std::cin>>califi;
        listavideo.buscarPeliculaCal(califi);
        break;
    case 3:
        std::cout<<"Cual genero deseas buscar?(drama, ficcion, accion)\n"<<std::endl;
        std::cin>>GEN;
        listavideo.buscarEpiGen(GEN);
        break;
    case 4:
        std::cout<<"Con que calificacion deseas buscar series (1-5)?\n"<<std::endl;
        std::cin>>califi;
        listavideo.buscarEpiCal(califi);
        break;
    case 5:
        std::cout<<"Cual genero deseas buscar?(drama, ficcion, accion)\n"<<std::endl;
        std::cin>>GEN;
        listavideo.buscarVidGen(GEN);
        break;
    case 6:
        std::cout<<"Con que calificacion deseas buscar videos (1-5)?\n"<<std::endl;
        std::cin>>califi;
        listavideo.buscarVidCal(califi);
        break;
    case 7:
        std::cout<<"Inserte el nombre del titulo que quiere calificar. \nLos espacios pongalos con guion bajo (_)\n"<<std::endl;
        std::cin>>tituloo;
        double caliNueva;
        std::cout<<"Inserte la nueva calificacion. \nEsta se va a sumar a la anterior y se va a sacar un promedio de las dos.\n"<<std::endl;
        std::cin>>caliNueva;
        listavideo.modificarCali(tituloo, caliNueva);
        break;
    case 8:
        std::cout<<"------Terminando progarama, gracias por usar Neflox------"<<std::endl;
        break;
    default:
        std::cout<<"Opcion invalida. Seleccione otra opcion"<<std::endl;
    }
    system("Pause");
  }while(opcion !=8);
}

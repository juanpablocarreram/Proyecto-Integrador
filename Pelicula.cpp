#include "Pelicula.hpp"
#include <iostream>
#include <string>

using namespace std;

Pelicula::Pelicula(int id,double peso, string titulo, int duracion, string genero, vector<int> calificaciones):Video(id,peso,titulo, duracion, genero, calificaciones) {}


void Pelicula::mostrarInformacion(){
    cout << " Título: " <<this->titulo << endl;
    cout << "  Tipo de Video: " << this->tipo() <<endl;
    cout << "  Duración: " << this->duracion << " min" << endl;
    cout << "  Género: " << this->genero << endl;
    cout << "  Peso en GB: " << this->pesoGb << endl;
    cout << "  Calificación Promedio: " << this->calificacionPromedio << endl;  
}
string Pelicula::tipo(){
    return "Pelicula";
}
#include "Pelicula.hpp"
#include <iostream>
#include <string>

using namespace std;

Pelicula::Pelicula(int id, string titulo, int duracion, string genero, vector<int> calificaciones, double peso):Video(id, titulo, duracion, genero, calificaciones, peso) {}

Pelicula::~Pelicula(){}

void Pelicula::mostrarInformacion(){
    cout << "Título: " << titulo << endl;
    cout << "Duración: " << duracion << " min" << endl;
    cout << "Género: " << genero << endl;
    cout << "Peso en GB: " << pesoGb << endl;
    cout << "Calificación Promedio: " << calificacionPromedio << endl;
}

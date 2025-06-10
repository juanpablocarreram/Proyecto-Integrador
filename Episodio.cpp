#include "Episodio.hpp"
#include <iostream>
Episodio::Episodio(int id, double pesoGb, string titulo, int duracion,string genero, vector<int> calificaciones, int temporada):Video(id,pesoGb,titulo,duracion,genero,calificaciones), temporada(temporada){}
   
int Episodio::getTemporada(){
    return this->temporada;
}
void Episodio::mostrarInformacion(){
    cout << " Título: " <<this->titulo << endl;
    cout << "  Tipo de Video: " << this->tipo() <<endl;
    cout << "  Duración: " << this->duracion << " min" << endl;
    cout << "  Género: " << this->genero << endl;
    cout << "  Peso en GB: " << this->pesoGb << endl;
    cout << "  Calificación Promedio: " << this->calificacionPromedio << endl;  
    cout << "  Temporada:" << this->temporada << endl;
}
string Episodio::tipo(){
    return "Episodio";
}
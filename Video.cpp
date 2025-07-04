#include "Video.hpp"
Video::Video(int id, double pesoGb,string titulo, int duracion, string genero, vector<int> calificaciones):id(id), pesoGb(pesoGb),titulo(titulo),duracion(duracion),genero(genero),calificaciones(calificaciones),calificacionPromedio(0){
    this->ajustarCalificacionPromedio();
}
Video::~Video(){}
void Video::añadirCalificacion(int calificacion){
    try{
        if(calificacion < 1 || calificacion > 5){
            throw calificacion;
        }
        this->calificaciones.push_back(calificacion);
        this->ajustarCalificacionPromedio();
    }
    catch(int& e){
        cout << e << " no es válido, debes ingresar calificacion en el rango de 1-5" << endl;
    }
}
void Video::ajustarCalificacionPromedio(){
   int contador = 0;
    int suma = 0;
    for(int elemento: this->calificaciones){
        contador++;
        suma += elemento;
    }
    if (contador > 0) {
        this->calificacionPromedio = static_cast<double>(suma) / contador;
    } else {
        cout << "No existen elementos disponibles para calcular la calificacion promedio" << endl;
    }
}
double Video::getPeso() const{
    return this->pesoGb;
}
string Video::getTitulo(){
    return this->titulo;
}
int Video::getDuracion(){
    return this->duracion;
}
string Video::getGenero(){
    return this->genero;
}
const vector<int>& Video::getCalificaciones(){
    return this->calificaciones;
}
double Video::getCalificacionPromedio(){
    return this->calificacionPromedio;
}
double Video::operator+(const Video& multimedia){
    return this->pesoGb + multimedia.getPeso();
}
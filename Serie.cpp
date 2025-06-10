#include "Serie.hpp"
Serie::Serie():calificacionPromedio(0){}
Serie::Serie(string titulo,vector<Episodio*> episodios,double calificacionPromedio):calificacionPromedio(calificacionPromedio),episodios(episodios),titulo(titulo){}
void Serie::añadirEpisodio(Episodio* episodio){
    this->episodios.push_back(episodio);
}
string Serie::getTitulo(){
return this->titulo;
}
void Serie::calcularCalificacionPromedio(){
    int suma = 0;
    int contador =0; 
    for(Episodio* elemento: this->episodios){
        contador  = contador + 1;
        suma = suma + elemento->getCalificacionPromedio();
    }
    if(contador > 0){
         this->calificacionPromedio = suma /contador;
    }
}
vector<Episodio*> Serie::getEpisodios(){
    return this->episodios;
}
double Serie::getCalificacionPromedio(){
    return this->calificacionPromedio;
}
#include "Video.hpp"
#include "Serie.hpp"
#include "Pelicula.hpp"
#include "Episodio.hpp"
#include <vector>
#include <random>
#include <iostream>
int getRandomInt(int min, int max) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(min, max);
    return distrib(gen);
}
int main(void){
    vector<Video*> multimedia;
    Serie* serie1 = new Serie();
    string generos[3] = {"Terror","Comedia","Accion"};
    //Crear Episodios//
    for (int i = 0; i<10;i++){
        vector<int> calificaciones = {1,4,5};
        Episodio* episodioTemporal = new Episodio(2,10.5,"Episodio-" + to_string(i + 1),3600,generos[getRandomInt(0,2)],calificaciones,2);
        multimedia.push_back(episodioTemporal);
    }
    //Crear Peliculas//
    for (int i = 0; i<5;i++){
        vector<int> calificaciones = {1,4,5};
        Pelicula* peliculaTemporal = new Pelicula(2,20.2,"Pelicula-" + to_string(i + 1),3600,generos[getRandomInt(0,2)],calificaciones);
        multimedia.push_back(peliculaTemporal);
    }
    //Mostrar Elementos Video//
    cout<<"Multimedia:" <<endl;
    for(Video* elemento: multimedia){
       if(elemento->tipo() == "Episodio"){
            Episodio* ep = dynamic_cast<Episodio*>(elemento);
            if(ep) serie1->añadirEpisodio(ep);
        }
         elemento->mostrarInformacion();
    }
    //Mostrar Elementos de Serie//
    cout<<"Titulo Serie:" << serie1->getTitulo() << endl;
    int counter = 1;
    vector<Episodio*> episodiosSerie1 = serie1->getEpisodios();
    for(Episodio* elemento:episodiosSerie1){
        cout <<"-Episodio "+to_string(counter) << ":" << endl;
        elemento->mostrarInformacion();
        counter = counter + 1;
    }
    serie1->calcularCalificacionPromedio();
    cout << "Datos Adicionales Serie:" << endl;
    cout << "    Calificacion Promedio Serie:" << serie1->getCalificacionPromedio() << endl;
    double pesoTotalGb = 0;
    for (size_t i = 1; i < episodiosSerie1.size(); ++i) {
    pesoTotalGb += *episodiosSerie1[i-1] + *episodiosSerie1[i];
    }
    cout << "    Peso Total Serie:" << pesoTotalGb << "GB" << endl;
    for(Video* elemento: multimedia){
        delete elemento;
    }
    delete serie1;
}
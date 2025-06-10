#pragma once

#include "Video.hpp"
#include "Episodio.hpp"
#include <vector>

using namespace std;

class Serie{
private:
    string titulo;
    vector<Episodio*> episodios;
    double calificacionPromedio;

public:
    Serie();
    Serie(string titulo,vector<Episodio*> episodios, double calificacionPromedio);
    void añadirEpisodio(Episodio*);
    void calcularCalificacionPromedio();
    vector<Episodio*> getEpisodios();
    string getTitulo();
    double getCalificacionPromedio();
};

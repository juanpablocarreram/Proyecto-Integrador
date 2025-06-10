#pragma once
#include <iostream>
#include "Video.hpp"

#include <string>

using namespace std;


class Pelicula:public Video{
    public:
    Pelicula(int id,double peso, string titulo, int duracion, string genero, vector<int> calificaciones);
    void mostrarInformacion() override;
    string tipo() override;
};


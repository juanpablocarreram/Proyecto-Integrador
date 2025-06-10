#pragma once
#include "Video.hpp"
#include <string>

using namespace std;

class Episodio:public Video {
private:
    int temporada;

public:
    Episodio(int id,double peso, string titulo, int duracion, string genero, vector<int> calificaciones,int temporada);
    int getTemporada();
    void mostrarInformacion() override;
    string tipo() override;
};

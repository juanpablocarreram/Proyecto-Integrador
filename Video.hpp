#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Video{
    public:
        Video(int id, double pesoGb, string titulo, int duracion, string genero, vector<int> calificaciones);
        virtual ~Video();
        void añadirCalificacion(int calificacion);
        void ajustarCalificacionPromedio();
        double getPeso() const;
        string getTitulo();
        int getDuracion();
        string getGenero();
        const vector<int>& getCalificaciones();
        double getCalificacionPromedio();
        virtual void mostrarInformacion() = 0;
        double operator+(const Video& multimedia);
        virtual string tipo() = 0;
    protected:
        int id;
        double pesoGb;
        string titulo;
        int duracion;
        string genero;
        vector<int> calificaciones;
        double calificacionPromedio;
};